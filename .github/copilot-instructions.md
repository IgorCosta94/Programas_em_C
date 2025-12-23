# Copilot / AI agent instructions for this repository ✅

Quick summary
- This repository is a collection of small, single-file C/C++ exercise programs grouped by topic (Portuguese folder names like `Programas_introdutórios`, `Arrays`, `Funções`, `Ponteiros`, etc.).
- Each file is typically a standalone console program (one `main`) intended to be compiled and executed directly.

Quick start (how to build and run a single exercise)
- g++ (MinGW / WSL / Linux):
  - g++ -std=c++17 -O2 -Wall -Wextra -o "bin/2.17_imprimindo" "Programas_introdutórios/2.17_imprimindo_valores_com_printf.cpp"
  - ./bin/2.17_imprimindo
- MSVC (Developer Command Prompt on Windows):
  - cl /EHsc /Fe:bin\\2.17.exe "Programas_introdutórios\\2.17_imprimindo_valores_com_printf.cpp"
  - bin\\2.17.exe
- Notes: many paths contain spaces and accented characters; always quote paths in shell commands and ensure scripts are UTF‑8 aware.

Repository structure & conventions
- Directory-per-topic: files are grouped by concept (e.g., `Arrays/`, `Funções/`, `Ponteiros/`). Each topic folder contains a small `read me` file with a one-line description.
- File naming convention: files are named with a leading chapter/number and short description, e.g. `2.17_imprimindo_valores_com_printf.cpp`. When adding files, follow this pattern and place them in the appropriate topic folder.
- Implementation style: code uses a C-style idiom (stdio, `printf`, `main`) even though files have `.cpp` extensions. Avoid inserting heavy C++-only features unless clearly necessary.

What an agent should assume
- There is no top-level build system (no Makefile/CMake/CI). Agents should avoid assuming tests or CI exist.
- No unit tests or automated test harness is present. If adding tests, create a `tests/` folder and a small runner script (`run_tests.bat` / `run_tests.sh`) and document it in the repository README.
- Keep PRs minimal: change one exercise per PR and avoid mass refactors that rename files or change encodings without explicit human review.

Patterns & examples to reference
- Example file (compile-and-run target): `Programas_introdutórios/2.17_imprimindo_valores_com_printf.cpp` uses `stdio.h` and prints to stdout.
- Use consistent compilation flags when adding a repository-level build script: `-std=c++17 -O2 -Wall -Wextra`.

Common pitfalls for automated edits
- Paths include spaces and non-ASCII chars (Portuguese accents). Use quoted paths and UTF‑8 encoding when creating scripts or CI jobs.
- Many files are written in plain C style—automated modernization (e.g., converting to classes, changing IO APIs) may introduce behavioral changes; only do that with tests or an explicit goal.

Where to update docs
- Add or update the per-folder `read me` files to list new exercises and give short descriptions (single-line entries). Keep text concise and Portuguese is acceptable.

If you need more
- If you want CI or a test harness, propose a minimal plan (e.g., a top-level `Makefile` or `CMakeLists.txt` and a `tests/` directory with a simple runner), and I can help create the files and an initial test for one exercise.

Thanks — ask if you want any section expanded or an automated PR that scaffolds a basic build/test workflow. ✨