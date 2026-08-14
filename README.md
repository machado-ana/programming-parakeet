# Programming Parakeet 🦜
## Overview

This repository tracks my progress through competitive programming problems solved for **ECOX21** discipline, split into two tracks:

- **Problem sets** — individual BeeCrowd exercises, solved and organized by topic as the course progresses.
- **Mock contests** — timed, multi-problem simulations that mirror real programming contest conditions.

Repository status: in progress. Lists are added as the course moves forward.

## Repository structure

```
programming-parakeet/
├── material/                   # Course notes and reference material
├── problems/
│   └── set-01/                 # Problem set 01 — individual exercises
│       ├── ex1015.cpp
│       ├── ex1017.cpp
│       └── ...
├── contests/
│   └── mock-01/                # Mock contest 01 — timed simulation
│       ├── a.cpp
│       ├── b.cpp
│       └── ...
├── LICENSE
└── README.md
```


## Running locally

```bash
# Individual problem
g++ -o ex1015 problems/set-01/ex1015.cpp
./ex1015 < input.txt

# Mock contest problem
g++ -o a contests/mock-01/a.cpp
./a < input.txt
```


## License

MIT — see [LICENSE](./LICENSE).
