# Lab Work 6: Iterative Algorithms in C

This project is a laboratory work for the "Computer Technologies and Programming" course. It contains two independent C programs that demonstrate the use of **iterative loops** (`for`, `while`) for performing calculations.

## Programs Included

### 1. Task 1 — Piecewise Function Tabulation (`task1.c`)

This program calculates and displays a table of values for a piecewise-defined mathematical function `y(x)`. It iterates from a start value to an end value with a specified step.

The function `y(x)` is defined as:
- `y = 9.74x² + cos(6.4x)` if `x ≤ -3.1`
- `y = sqrt((4.3x² + 2) / (1 + ln²(x² + 0.3)))` if `x > -1.37`

The program uses a **`for` loop** to iterate through the values of `x` and prints the results in a formatted table.

### 2. Task 2 — Sum of N Integers (`task2.c`)

This program calculates the sum of the first `N` positive integers (1 + 2 + 3 + ... + N). The user is prompted to enter the number `N`.

The calculation is performed using a **`while` loop**.

## How to Compile and Run

Both programs can be compiled using GCC or an equivalent C compiler.

### Compile Task 1
```bash
gcc task1.c -o task1 -lm
./task1
```

> [!NOTE]  
> The `-lm` flag is required for linking the math library.

### Compile Task 2
```bash
gcc task2.c -o task2
./task2
```

## Example Usage

Example run of **Task 1**:
```text
Введіть межі інтервалу:
  Початок інтервалу a -> -4
  Кінець інтервалу b -> -3
  Крок h -> 0.1

+-----------+--------------+----------------+
| № точки   | x            | y(x)           |
+-----------+--------------+----------------+
| 1         |      -4.0000 |     156.786937 |
| 2         |      -3.9000 |     148.900113 |
...
+-----------+--------------+----------------+
```

Example run of **Task 2**:
```text
Введіть кількість сумованих чисел -> 100
Сума перших 100 додатніх чисел дорівнює 5050
```

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2).
