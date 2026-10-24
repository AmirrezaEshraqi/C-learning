# C Basics

My notes from learning C.

## 1. Basics

- `#include <stdio.h>` — input/output functions.
- `main()` — program entry point.
- Statements usually end with `;`.
- `{}` defines a block of code.
- `//` and `/* ... */` are comments.
- C is case-sensitive.

```c
int age = 18;
const double PI = 3.14;
char grade = 'A';
```

## 2. Data Types

- `int` — integers
- `float` — floating-point numbers
- `double` — floating-point numbers with more precision
- `char` — character / small integer type
- `bool` — available through `<stdbool.h>` in C versions before C23

`sizeof()` returns the size of a type or object in bytes.

## 3. Output and Input

```c
printf("Age: %d\n", age);
scanf("%d", &age);
```

Common format specifiers:

- `%d` — `int`
- `%f` — `float` in `scanf()`, floating-point value in `printf()`
- `%lf` — `double` in `scanf()`
- `%c` — character
- `%s` — string
- `%p` — pointer
- `%zu` — `size_t`

Use `&variable` with `scanf()` for ordinary variables. Check its return value when input validity matters.

## 4. Type Conversion and Operators

```c
int a = 5 / 2;         // 2
double b = 5.0 / 2;   // 2.5
int c = (int)3.9;     // 3
```

Integer division discards the fractional part.

**Operators**

- Arithmetic: `+ - * / % ++ --`
- Comparison: `== != > < >= <=`
- Logical: `&& || !`
- Assignment: `= += -= *= /=`
- Bitwise: `& | ^ ~ << >>`

Use parentheses when precedence is unclear.

```c
// Wrong for checking a range:
0 < x <= 20

// Correct:
x > 0 && x <= 20
```

`&&` and `||` are logical operators; `&` and `|` are bitwise operators.

## 5. Conditions and Loops

- `if / else if / else` — conditional execution
- `switch / case` — select between cases
- `for` — loop with initialization, condition and update
- `while` — loop while a condition is true
- `break` — exit a loop or `switch`
- `continue` — skip to the next loop iteration

In conditions, `0` means false and nonzero means true.

## 6. Arrays and Strings

An array stores elements of the same type. Indexing starts at `0`.

```c
int numbers[] = {10, 20, 30};
printf("%d", numbers[0]);
```

A C string is a `char` array ending with the null character `'\0'`.

```c
char name[] = "Shao";
```

- `strlen()` counts characters before `'\0'`.
- `sizeof(name)` gives the array's size in bytes while `name` is still an array.
- Array access must stay within bounds.

## 7. Memory Addresses and Pointers

- `&x` — address of `x`
- `int *p` — pointer to an `int`
- `*p` — access the object pointed to by `p`

```c
int x = 10;
int *p = &x;

*p = 20;  // x is now 20
```

Arrays and pointers are related, but they are not the same thing. Never dereference an invalid or uninitialized pointer.

## 8. Functions

Functions let us reuse code.

```c
int add(int a, int b)
{
    return a + b;
}
```

- Parameters receive argument values.
- `return` sends a value back to the caller.
- `void` means no return value.
- A function prototype declares a function before its definition.
- Local variables have block scope.

**C uses pass by value.** To let a function modify a variable in the caller, pass its address using a pointer.

```c
void change(int *x)
{
    *x = 100;
}
```

### Other function topics

- `<math.h>` provides functions such as `sqrt()` and `pow()`.
- `inline` is a compiler hint, not a guarantee.

```c
static inline int square(int x)
{
    return x * x;
}
```

## Practice

Keep practicing by writing small programs, testing different inputs, and fixing mistakes.

**Resource:** [W3Schools C Tutorial](https://www.w3schools.com/c/index.php)
