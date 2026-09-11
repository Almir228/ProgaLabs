# Programming coursework

MIPT programming exercises in **Python and C++**: working with tabular data, measuring algorithm performance, implementing data structures and exploring simple physical models. These are educational projects with different levels of completion.

## Start here: data and analysis

- [Algorithm measurements](lab1/Обработка/graphic.ipynb): pandas reads recorded CSV measurements; SciPy fits logarithmic/linear models; matplotlib compares timing observations and fitted curves. [Written discussion](lab1/Обработка/Обработка.md).
- [Student-data exercises](Programing/bonus_task/bonus_task.ipynb): combine ten groups of tables by record index, inspect missingness, compare descriptive summaries and compute pass/grade categories. The local CSVs contain demographic categories and scores, without names or contact fields; the original data source/licence is not documented here.
- [Sorting measurements](lab2/approx.py): NumPy fits slopes in log-log coordinates using supplied timing data. This analysis can be run independently of the incomplete C++ sources.

These examples demonstrate coursework, not commercial product analytics or causal effects. Some older notebooks are partial solutions; see limitations below.

## Projects

| Directory | Task, language and methods |
|---|---|
| [Grid](Grid) | C++: 2D and recursive N-dimensional grid containers; indexing, dynamic memory and copy/move semantics. Existing class documentation is kept. |
| [Skiplist](Skiplist) | C++: probabilistic multi-level ordered list with insertion, lookup, iterators and range operations. Existing API notes are kept. |
| [Programing](Programing) | Python: pandas exercises, NumPy/matplotlib/seaborn plotting, turtle/pygame graphics and a solar-system exercise using pairwise gravitational forces and explicit time stepping. The solar-system README describes joint coursework; no sole-authorship claim is made. |
| [lab1](lab1) | C++ search/pair-sum exercises and Python/Jupyter analysis of timing measurements; linear and binary search, alternative search strategies and curve fitting. |
| [lab2](lab2) | C++ shaker, comb and Shell-sort experiments; Python plots and log-log fits for measurement CSVs. The included C++ files refer to a missing `Function.h`. |
| [lab3](lab3) | C++ linked list and dynamic-array exercises with Python graphs; compares allocation/growth strategies and their cost. |

Names such as `Programing` and `Libaries/Lincked_list` are retained because existing paths and includes use them. The separate [lab3 repository](https://github.com/Almir228/lab3) is a related version with differences in `task2.3.cpp` and an additional test program.

## Run the analysis

Python 3.10+ is a practical starting point. From the repository root:

```bash
python3 -m venv .venv
source .venv/bin/activate
python -m pip install -r requirements.txt
jupyter lab
```

Open notebooks in their own directories so their adjacent `data/` or `Data/` paths resolve. Run `lab2/approx.py` from any working directory; it resolves data relative to its own file. Recorded CSVs and PDF results are preserved.

`requirements.txt` covers tabular analysis and plots. Interactive graphics additionally require `pygame`; `solar_system` imports `thorpy` with an older API that has not been validated against current releases. Turtle requires a Python installation with Tk support. There is no single command that runs every coursework project.

C++ projects `Grid` and `Skiplist` each have a CMake file requiring CMake 3.26+ and C++23; for example `cmake -S Grid -B build/Grid` then `cmake --build build/Grid`. These commands describe the supplied build setup, not a guarantee that every exercise is complete.

## Known limitations

- `Programing/control task/control_task.ipynb` includes incomplete assignment cells and depends on an external spreadsheet. It is kept as coursework, not recommended as the first code example.
- `bonus_task` contains partial answers. Portability, table alignment and several directly verifiable summary/grade errors have been corrected; this is not a full regrading of the assignment.
- `lab2` cannot be built as supplied because `Function.h` is missing; the recorded data and analysis remain usable.
- The Grid, Skiplist and lab3 CMake targets build with the checked local Apple Clang setup; lab3 still emits warnings about variable-length arrays. Several C++ exercises require a separate correctness review. Historical complexity discussion in `lab3` is informal and should not substitute for a proof.
- GUI exercises need a desktop environment. The solar-system model has simplified dynamics and collision handling.
- No product impact, A/B-test or machine-learning results are claimed by these projects.

Generated build/IDE files and Python bytecode are excluded from Git; educational data, figures, source files and reports are retained.
