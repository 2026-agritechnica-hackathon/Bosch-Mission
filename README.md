# Bosch Mission — SeamOS Hackathon Template

A ready-to-build SeamOS C++ app (with React CustomUI) for the
2026 Agritechnica Hackathon. Clone, bootstrap, build, run.

## Prerequisites

| Tool | Linux x86_64 | macOS |
|---|---|---|
| **seamos-ide** | ✅ required | ✅ required |
| **JDK 21** (active `java`) | ✅ required | ✅ required |
| **Node.js + npm** | ✅ required (CustomUI build) | ✅ required |
| Native C/C++ toolchain (`build-essential`, `cmake` ≥ 3.12) | ✅ required | — (uses Docker) |
| **Docker** running | only for `fif` build | ✅ required (C++ build/run + fif) |

> macOS Apple Silicon: enable Docker Desktop → **Rosetta / amd64
> emulation**. Linux **must be x86_64** (the SDK is x86_64).
> Verify Java: `java -version` must report **21**.

## Steps

```bash
# 1. Clone
git clone https://github.com/2026-agritechnica-hackathon/Bosch-Mission.git
cd Bosch-Mission

# 2. Bootstrap (once, after clone)
#    - regenerates machine-specific .seamos-context.json
#    - fixes the simulator UI path
#    - builds the CustomUI into the app's ui/ folder
bash scripts/seamos-bootstrap.sh
```

3. **Open the `Bosch-Mission` folder in seamos-ide.**

4. **Full build** in seamos-ide.
   The C++ SDK auto-extracts its dependencies at the cmake configure
   step — no extra action needed.

5. **Run the test simulator**, then open the CustomUI at
   <http://127.0.0.1:6563>.

6. *(optional)* Build a deployable `.fif` and upload it to the SeamOS
   marketplace from seamos-ide (Docker required for the fif build).

## CustomUI development

Edit UI source in **`customui-src/`** only (React). Redeploy with:

```bash
cd customui-src && npm run build      # outputs into hackathon_hackathon/ui/
```

Never edit `hackathon_hackathon/ui/` directly — it is build output.

## Claude Code plugin

`.claude/settings.json` auto-enables the **seamos-everywhere** plugin
(build, run, fif, marketplace skills). On first `claude` run in the
folder, approve the workspace-trust / marketplace prompts.

## Troubleshooting

| Symptom | Fix |
|---|---|
| `LinkageError ... TestSimulator` | install/activate **JDK 21**, relaunch seamos-ide from a fresh shell |
| `CMake ... Could NOT find <pkg>` | `rm -rf hackathon_CPP_SDK/build` and rebuild |
| `127.0.0.1:6563` blank | run `bash scripts/seamos-bootstrap.sh` (builds the UI) |
| macOS build hangs / "Docker 사용할 수 없습니다" | start Docker Desktop; Apple Silicon → enable amd64/Rosetta |

Full details: [`TEMPLATE_SETUP.md`](TEMPLATE_SETUP.md).
