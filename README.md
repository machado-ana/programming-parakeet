# Programming Parakeet 🦜

## Overview

This repository tracks my progress through competitive programming problems solved for the **Competitive Programming I** discipline, split into three tracks:

- **Problem sets** — individual BeeCrowd exercises, solved and organized by topic as the course progresses.
- **Mock contests** — timed, multi-problem simulations that mirror real programming contest conditions.
- **Learning** — standalone exercises exploring C++ STL containers and algorithm fundamentals, independent of graded problem sets.

Repository status: in progress. Sets, mocks, and exercises are added as the course moves forward.

## Repository structure

```
programming-parakeet/
├── material/                        # Course reference slides
│   ├── aula01-introducao-a-maratona.pdf
│   └── aula03-stl.pdf
├── learning/
│   ├── to-dos.txt                   # Notes / pending topics
│   └── 01-stl/                      # STL container exercises
│       ├── 01-vector.cpp
│       ├── 02-deque.cpp
│       ├── 03-list.cpp
│       └── 04-container-adapters.cpp
├── problems/
│   ├── set-01/                      # Problem set 01
│   │   ├── lista-01.txt             # Problem list
│   │   └── 1015.cpp, 1017.cpp, ...
│   └── set-02/                      # Problem set 02
│       ├── lista-02.txt
│       └── 1024.cpp, 1026.cpp, ...
├── contests/
│   └── mock-01/                     # Mock contest 01 — timed simulation
│       ├── prova.pdf                # Contest statement
│       └── B.cpp, C.cpp, D.cpp, E.cpp
├── LICENSE
└── README.md
```

Each `*.cpp` file is named after its BeeCrowd problem number (e.g. `1015.cpp`, `2845.cpp`); mock contest files are named after their contest letter (`B.cpp`, `C.cpp`, ...).

## Running locally

```bash
# Individual problem
g++ -o 1015 problems/set-01/1015.cpp
./1015 < input.txt

# Learning exercise
g++ -o vector learning/01-stl/01-vector.cpp
./vector

# Mock contest problem
g++ -o B contests/mock-01/B.cpp
./B < input.txt
```

## License

MIT — see [LICENSE](./LICENSE).
