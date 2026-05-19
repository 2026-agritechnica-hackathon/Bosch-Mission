#!/usr/bin/env bash
# seamos-bootstrap.sh — regenerate machine-specific state after `git clone`.
#
# `.seamos-context.json` is gitignored because it embeds absolute paths that
# differ per machine. The seamos-everywhere plugin skills (build-fif, run-app,
# init-customui, …) read it via resolve-paths.sh. This template uses a FLAT
# FD layout with multiple com.bosch.fsp.* dirs, where the plugin's disk
# inference picks the wrong project — so we write the context explicitly from
# this clone's real location.
#
# Run once after cloning:  bash scripts/seamos-bootstrap.sh
# Idempotent. Linux + macOS, bash 3.2 compatible.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd -P)"

# FSP dir = the shortest com.bosch.fsp.* name (excludes .gen / .gen.tests)
FSP_DIR=""
for d in "$ROOT"/com.bosch.fsp.*; do
  [ -d "$d" ] || continue
  case "$(basename "$d")" in
    *.gen|*.gen.tests) ;;
    *) FSP_DIR="$d" ;;
  esac
done
if [ -z "$FSP_DIR" ]; then
  echo "ERROR: no FSP dir (com.bosch.fsp.<name>) found under $ROOT" >&2
  exit 1
fi
PROJECT="$(basename "$FSP_DIR")"; PROJECT="${PROJECT#com.bosch.fsp.}"

APP_DIR="$ROOT/${PROJECT}_${PROJECT}"
SDK_DIR="$ROOT/${PROJECT}_CPP_SDK"
CUI_DIR="$ROOT/customui-src"
DEEP_UI="$APP_DIR/ui"

for p in "$APP_DIR" "$SDK_DIR"; do
  [ -d "$p" ] || { echo "ERROR: expected dir missing: $p" >&2; exit 1; }
done

cat > "$ROOT/.seamos-context.json" <<EOF
{
  "last_project": {
    "name": "$PROJECT",
    "app_project_name": "$PROJECT",
    "layout_kind": "flat",
    "workspace_path": "$ROOT",
    "fsp_path": "$FSP_DIR",
    "sdk_project_path": "$SDK_DIR",
    "app_project_path": "$APP_DIR",
    "customui_src_path": "$CUI_DIR",
    "deep_ui_path": "$DEEP_UI"
  }
}
EOF

echo "[ok] wrote $ROOT/.seamos-context.json (project=$PROJECT)"

# Extract the C++ SDK runtime/headers from the committed tarball.
# .gitignore excludes <SDK>/dependencies/{lib,include}; only the tarball is
# committed. seamos-ide extracts it during project Import, but a plain
# `cmake -DCMAKE_PREFIX_PATH=dependencies` build (or build-before-import)
# would otherwise fail every FIND_PACKAGE with
# "FindPackageHandleStandardArgs.cmake:230 ... Could NOT find <pkg>".
SDK_DEPS="$SDK_DIR/dependencies"
SDK_TAR="$SDK_DEPS/INSTALL_x86_64.tar.xz"
if [ -f "$SDK_TAR" ] && [ ! -d "$SDK_DEPS/lib/cmake" ]; then
  echo "[..] extracting SDK dependencies ($(basename "$SDK_TAR"))"
  tar xf "$SDK_TAR" -C "$SDK_DEPS"
  if [ -d "$SDK_DEPS/lib/cmake" ]; then
    echo "[ok] SDK dependencies extracted into $SDK_DEPS"
  else
    echo "WARN: extraction did not produce lib/cmake — check the tarball" >&2
  fi
else
  echo "[skip] SDK dependencies already extracted (or tarball absent)"
fi

# Point the test simulator at THIS clone's UI folder. Simulator.properties
# is committed with a relative path (../<app>/ui) that works from the
# gen.tests CWD, but rewrite it to an absolute path here so it is robust
# regardless of how the IDE launches the simulator.
SIM_PROPS="$ROOT/com.bosch.fsp.${PROJECT}.gen.tests/Simulator.properties"
if [ -f "$SIM_PROPS" ]; then
  tmp="$SIM_PROPS.tmp.$$"
  grep -v '^uiFolderLocation=' "$SIM_PROPS" > "$tmp" || true
  echo "uiFolderLocation=$DEEP_UI" >> "$tmp"
  mv "$tmp" "$SIM_PROPS"
  echo "[ok] Simulator.properties uiFolderLocation -> $DEEP_UI"
fi

# CustomUI: install deps AND build, so <app>/ui/ is populated. Without a
# build, the simulator serves an empty folder and 127.0.0.1:6563 is blank.
if [ -d "$CUI_DIR" ]; then
  if [ ! -d "$CUI_DIR/node_modules" ]; then
    echo "[..] installing customui-src dependencies (npm install)"
    ( cd "$CUI_DIR" && npm install )
  fi
  if [ ! -f "$DEEP_UI/index.html" ]; then
    echo "[..] building CustomUI into $DEEP_UI (npm run build)"
    ( cd "$CUI_DIR" && npm run build )
    if [ -f "$DEEP_UI/index.html" ]; then
      echo "[ok] CustomUI deployed — 127.0.0.1:6563 will serve it"
    else
      echo "WARN: build did not produce $DEEP_UI/index.html — check customui-src" >&2
    fi
  else
    echo "[skip] CustomUI already built ($DEEP_UI/index.html present)"
  fi
fi

echo "[done] Next: open this folder in seamos-ide and run Import / full build."
