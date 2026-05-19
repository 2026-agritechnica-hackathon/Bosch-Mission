# SeamOS Hackathon Template — Setup

SeamOS C++ app template (FD flat layout). Builds and runs via seamos-ide
on **Linux x86_64 (native toolchain — no Docker)** and **macOS (via
Docker)**. The committed SDK is Linux x86_64 ELF, so where the C++
toolchain runs differs by host OS (see Platform notes).

## 0. Prerequisites (READ FIRST — not bundled in this repo)

These are NOT in the repo and MUST exist on each participant's machine.

| Requirement | Why | If missing |
|---|---|---|
| **JDK 21** as the active `java` (all platforms) | The test simulator is compiled to Java 21; the IDE launches `java` from the environment with no version fallback | `LinkageError ... TestSimulator` / `TestSimulator exited with code 1` |
| **Docker** running — **macOS only** for C++ build/run; **all platforms** for `fif` build | seamos-ide builds/runs C++ natively on Linux but inside a `linux/amd64` container on macOS (can't link x86_64 ELF natively). `fif` build always uses Docker | macOS: "Docker를 사용할 수 없습니다" — no build/run. Linux: only `fif` build affected |
| **Native C++ toolchain** — **Linux only** (`gcc`/`g++`, `cmake` ≥ 3.12, `make`) | Linux build runs cmake directly on the host, not in Docker | `cmake`/compiler not found at full build |

### Platform notes

| Environment | Status | Docker needed? | Notes |
|---|---|---|---|
| Linux **x86_64** | ✅ best | only for `fif` build | native build/run; install `build-essential cmake` |
| macOS Intel | ✅ | yes (C++ build/run + fif) | Docker Desktop |
| macOS Apple Silicon | ⚠️ works, slower | yes (C++ build/run + fif) | Docker Desktop → enable **Rosetta / amd64 emulation** |
| Linux **arm64** | ❌ not supported | — | committed SDK is x86_64 ELF; Linux build is native (no emulation path in IDE) — use an x86_64 Linux host |

### Verify / fix JDK 21

```bash
java -version          # must report 21.x
/usr/libexec/java_home -V          # macOS: is a 21 JVM registered?
```

If `java -version` is not 21:

- **macOS (Homebrew):**
  ```bash
  brew install openjdk@21
  sudo ln -sfn $(brew --prefix openjdk@21)/libexec/openjdk.jdk \
       /Library/Java/JavaVirtualMachines/openjdk-21.jdk
  export JAVA_HOME=/Library/Java/JavaVirtualMachines/openjdk-21.jdk/Contents/Home
  ```
  Add the `export JAVA_HOME=...` to `~/.zshrc`, then **fully quit and
  relaunch seamos-ide from a fresh shell** — a running IDE keeps the old
  `JAVA_HOME` and the error persists even after fixing it.
- **Linux (Debian/Ubuntu):** `sudo apt install openjdk-21-jdk` then
  `sudo update-alternatives --config java` → pick 21. Relaunch the IDE.

## 1. Clone & bootstrap

```bash
git clone https://github.com/2026-agritechnica-hackathon/Bosch-Mission.git
cd Bosch-Mission
bash scripts/seamos-bootstrap.sh
```

`seamos-bootstrap.sh` (idempotent) does three things:

1. regenerates `.seamos-context.json` (gitignored — embeds absolute paths
   that differ per machine),
2. **extracts the C++ SDK runtime** from
   `<app>_CPP_SDK/dependencies/INSTALL_x86_64.tar.xz` into `dependencies/`
   (only the tarball is committed; the extracted `lib/`+`include/` are
   gitignored). **Required before any C++ build** — CMake resolves all
   `FIND_PACKAGE` calls from `dependencies/lib/cmake`,
3. runs `npm install` inside `customui-src/` if needed.

> Run this BEFORE building. seamos-ide also extracts the tarball during
> project **Import**, but a build triggered before Import (or a raw
> `cmake` build) will fail without this step.

## 2. Open in seamos-ide

Open the cloned folder in **seamos-ide** and run **Import / full build**.
The IDE regenerates the layers that are intentionally NOT committed:
`com.bosch.fsp.*.gen/`, `com.bosch.fsp.*.gen.tests/src/`,
`<app>_CPP_SDK/src-gen/`, and re-extracts the SDK runtime from
`<app>_CPP_SDK/dependencies/INSTALL_x86_64.tar.xz`.

## 3. CustomUI

UI source of truth is `customui-src/` (React). Build deploys into
`<app>/ui/` (gitignored):

```bash
cd customui-src && npm run build
```

Never edit `<app>/ui/` directly — it is build output. The local simulator
serves this folder; if `http://127.0.0.1:6563` returns 404, the UI has not
been built yet.

## 4. Claude Code plugin (optional, recommended)

`.claude/settings.json` enables the **seamos-everywhere** plugin
(build-fif, run-app, upload-app, …) from the public marketplace
`AGMO-Inc/seamos-everywhere`. On first `claude` run in the folder, approve
the workspace-trust and marketplace prompts; the plugin installs
automatically. Verify with `/plugin` and `/plugin marketplace list`.

## Troubleshooting

| Symptom | Cause | Fix |
|---|---|---|
| `LinkageError ... TestSimulator` / `exited with code 1` | active `java` is not 21 (or IDE launched with stale `JAVA_HOME`) | install JDK 21, set `JAVA_HOME`, **relaunch IDE from a fresh shell** (§0) |
| "Docker를 사용할 수 없습니다" (macOS C++ build/run, or `fif` build any OS) | Docker not running, or amd64 emulation off on Apple Silicon | start Docker; enable Rosetta/amd64 (§0). Linux C++ build/run does NOT use Docker |
| `cmake`/`g++` not found at full build (Linux) | native toolchain missing — Linux builds on the host, not Docker | install `build-essential cmake` (Debian/Ubuntu) |
| `FindPackageHandleStandardArgs.cmake:230 ... Could NOT find <pkg>` (Boost / FCAL / NEVONEX-FCAL-PLATFORM / PahoMqttCpp / jsoncpp) | SDK dependencies not extracted — `<app>_CPP_SDK/dependencies/` has only the `.tar.xz` | run `bash scripts/seamos-bootstrap.sh` (extracts it), or manually: `tar xf <app>_CPP_SDK/dependencies/INSTALL_x86_64.tar.xz -C <app>_CPP_SDK/dependencies/`, then rebuild |
| `127.0.0.1:6563` → 404 Not Found | CustomUI not built into `<app>/ui/` | `cd customui-src && npm run build` |
| Plugin skills can't resolve project paths | `.seamos-context.json` missing (gitignored) | `bash scripts/seamos-bootstrap.sh` |
| Plugin not auto-installing | workspace not trusted / offline | approve trust prompt; ensure network for first install |

## What's committed vs regenerated

| Committed | Ignored (build output / machine state) |
|---|---|
| FSP source `com.bosch.fsp.<name>/` | `*.gen/bin`, `*.gen/target`, `*.gen.tests/bin`, `/target`, `/logs` |
| **FD-generated source** `*.gen/` (java), `*.gen.tests/{src,data}`, `<app>_CPP_SDK/src-gen/`, `<app>/src-gen/` — cmake does `add_subdirectory(src-gen)`, so it must exist on clone | `build/`, `out/`, `bin/`, `target/` |
| App user code `<app>_<app>/` (Manifest, config, CMakeLists) | `customui-src/node_modules`, `dist`, `<app>/ui/*` |
| `customui-src/` source | `<app>_CPP_SDK/build`, `/dependencies/{lib,include}` (re-extracted by bootstrap) |
| `*.gen.tests/testlib/*.jar` + metadata | runtime dirs `disk/ in/ out/ logs/ backup/` |
| `<app>_CPP_SDK/dependencies/INSTALL_x86_64.tar.xz` | `.seamos-context.json` (machine-specific abs paths) |
| `.claude/settings.json`, `.mcp.json`, `.seamos-workspace.json` | `*.zip`, `.metadata/` |

> Generated source is committed deliberately: participants build directly
> (often without an IDE Import), and the C++ `CMakeLists.txt` requires
> `src-gen/` to exist. The IDE may overwrite these on Import — that is
> harmless (regenerated content just shows as a diff).
