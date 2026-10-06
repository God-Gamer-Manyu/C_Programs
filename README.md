# C Programs — First-Semester B.Tech Lab Work

A structured collection of C programs written during the first semester of my B.Tech at Amrita School of Engineering, Bengaluru. The repository moves from basic I/O to control flow, loops, functions, recursion and 2-D arrays, and ends with a mini-project: a console-based **theatre seat booking system**.

---

## 📂 Repository Structure

| Folder | Topic | Example programs |
|---|---|---|
| `Lab1/` | Program structure, `printf` formatting | `Welcome.c`, `Address.c`, `marks.c` |
| `Lab2/` | Input with `scanf`, arithmetic, `switch` | `areaPerimeter.c` (circle / triangle), `bill.c`, `temperature.c` |
| `Lab3/` | Conditionals and nested `if` / `else` | `bmi.c`, `leapyear.c`, `largest.c`, `cord.c` (quadrant finder), `vowelgame.c` |
| `Lab 4/` | Loops and number theory | `prime.c`, `amstrong.c`, `fibonacciN.c`, `factorial.c`, `series1.c`, `pattern.c` |
| `Lab 7/` | User-defined functions | `calc.c` (menu calculator), `abs.c`, `evenodd.c`, `fact.c` (recursive), `tobinary.c` |
| `Lab 8/` | Arrays, 2-D matrices, recursion | `add.c` (matrix addition), `rcsum.c` (row/column sums), `sumofdig.c`, `recurseArray.c` |
| `Mock hackathon/` | Mini-project | `theatre.c`: theatre seat booking system |

---

## 🧠 Concepts Covered

- **Fundamentals:** data types, operators, formatted I/O (`printf` / `scanf`), type conversion
- **Control flow:** `if` / `else if` ladders, nested conditionals, `switch-case`, `while` / `for` loops, `break` / `continue`
- **Functions:** prototypes, pass-by-value, return values, `void` functions, nested functions (GCC extension, used in `series1.c` / `series2.c`)
- **Recursion:** factorial, sum of digits, decimal → binary conversion, recursive array traversal
- **Arrays:** 1-D arrays, 2-D matrices, variable-length arrays, memoisation (`fact_mem` in the series programs)
- **Algorithms:** primality testing, Armstrong numbers, Fibonacci series, digit manipulation, pattern printing
- **Standard libraries:** `stdio.h`, `stdlib.h`, `stdbool.h`, `ctype.h`, `math.h`

### 🎭 Mini-project architecture: Theatre Seat Booking (`Mock hackathon/theatre.c`)

A menu-driven console application that models a 5 × 5 seating grid:

- **State:** a `short int seats[5][5]` matrix (0 = free, 1 = booked), pre-filled with random bookings using `rand()`.
- **Single-seat booking:** validates row and column (`A`–`E`, mapped through `getColumn()`), then books the seat if it is free.
- **Block booking:** books *N* seats either contiguously in the same row (with bounds and availability checks) or one at a time.
- **Helper functions:** `display()` renders the grid (`B` / `NB`), and `nSeatsAvail()` counts seats.
- **Main loop:** repeats until the user exits.

---

## ⚙️ Getting Started

### Prerequisites
- A C compiler: **GCC** (Linux / macOS / WSL) or **MinGW-w64** (Windows)

### Compile & run a program

```bash
git clone https://github.com/God-Gamer-Manyu/C_Programs.git
cd C_Programs

# Example: prime numbers in a range
gcc "Lab 4/prime.c" -o prime
./prime            # Windows: prime.exe

# Programs that use math.h need -lm on Linux
gcc "Lab 4/amstrong.c" -o amstrong -lm

# Mini-project
gcc "Mock hackathon/theatre.c" -o theatre
./theatre
```

> **Note:** `series1.c` and `series2.c` use nested functions, a **GCC-only** extension, so compile them with `gcc` (not `clang` / MSVC).
> The committed `a.out` / `disc.out` files are old Linux build outputs and can be ignored.

---

## 🛠️ Tech Stack

`C (C99/GNU C)` · `GCC` · `VS Code (C/C++ build task in .vscode/tasks.json)`

## 👤 Author

**Rtamanyu N J**, [@God-Gamer-Manyu](https://github.com/God-Gamer-Manyu)
