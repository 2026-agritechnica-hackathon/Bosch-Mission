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

# Restore CustomUI deps if customui-src/ is present but not yet installed.
if [ -d "$CUI_DIR" ] && [ ! -d "$CUI_DIR/node_modules" ]; then
  echo "[..] installing customui-src dependencies (npm install)"
  ( cd "$CUI_DIR" && npm install )
  echo "[ok] customui-src deps installed — run 'npm run build' to deploy into ui/"
fi

echo "[done] Next: open this folder in seamos-ide and run Import / full build."
