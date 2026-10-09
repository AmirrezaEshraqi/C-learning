Notes for showing the progress
# C Basics — Notes

## 1. Introduction & Getting Started
- C is a general-purpose, compiled programming language.
- C programs are commonly compiled before execution.
- `#include <stdio.h>` provides standard input/output functions.
- `main()` is the entry point of a hosted C program.
- `return 0;` indicates successful termination from `main`.

## 2. Syntax
- Statements usually end with `;`.
- Code blocks are enclosed in `{}`.
- C is case-sensitive.
- Every executable statement must follow C syntax rules.

```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

## 3. Output
- `printf()` prints formatted output to `stdout`.
- `\n` inserts a newline.
- Format specifiers determine how values are printed.

| Specifier | Typical use |
|---|---|
| `%d` | `int` |
| `%f` | `float` / `double` in `printf` |
| `%c` | Character |
| `%s` | Null-terminated string |
| `%zu` | `size_t`, such as the result of `sizeof` |

## 4. Comments
- `//` starts a single-line comment.
- `/* ... */` creates a block comment.
- Comments are ignored by the compiler as code.
- Use comments to explain intent or non-obvious decisions.

```c
// Single-line comment

/*
   Block comment
*/
```

## 5. Variables
- A variable is a named object that stores a value.
- Declare a variable before using it.
- Initialize variables when an initial value is needed.
- Local variables are not automatically initialized.

```c
int age = 18;
double price = 9.99;
char grade = 'A';
```

## 6. Data Types
- A data type determines the kind of value an object can represent.
- Common types: `char`, `int`, `float`, `double`.
- `short`, `long`, `signed`, and `unsigned` modify integer types.
- Exact sizes depend on the implementation.
- `sizeof(type)` returns the size in bytes.

```c
printf("%zu\n", sizeof(int));
```

## 7. Type Conversion
- **Implicit conversion:** performed automatically by C.
- **Explicit conversion (cast):** requested by the programmer.
- Converting a floating-point value to an integer discards the fractional part.
- Integer division truncates the fractional part.

```c
int a = 5 / 2;          // 2
double b = 5.0 / 2;      // 2.5
double c = (double)5 / 2; // 2.5
```

## 8. Constants
- `const` makes an object non-modifiable through that identifier.
- `#define` creates a preprocessor macro.
- Constants help express values that should not be modified.

```c
const int MAX_SIZE = 100;
#define BUFFER_SIZE 256
```

## 9. Operators

### Arithmetic Operators
- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Division
- `%` Remainder (integer operands)
- `++` Increment
- `--` Decrement

```c
int remainder = 7 % 3; // 1
```

### Assignment Operators
- `=` Assigns a value.
- Compound assignments combine an operation with assignment.

| Operator | Equivalent form |
|---|---|
| `x += 3` | `x = x + 3` |
| `x -= 3` | `x = x - 3` |
| `x *= 3` | `x = x * 3` |
| `x /= 3` | `x = x / 3` |
| `x %= 3` | `x = x % 3` |
| `x &= 3` | `x = x & 3` |
| `x |= 3` | `x = x | 3` |
| `x ^= 3` | `x = x ^ 3` |
| `x <<= 1` | `x = x << 1` |
| `x >>= 1` | `x = x >> 1` |

### Comparison Operators
- `==` Equal to
- `!=` Not equal to
- `>` Greater than
- `<` Less than
- `>=` Greater than or equal to
- `<=` Less than or equal to
- Comparison expressions evaluate to `0` or `1` in C.

### Logical Operators
- `&&` Logical AND
- `||` Logical OR
- `!` Logical NOT
- In conditions, `0` means false and any nonzero value means true.
- `&&` and `||` short-circuit: the second operand may not be evaluated.

### Bitwise Operators
- `&` Bitwise AND
- `|` Bitwise OR
- `^` Bitwise XOR
- `~` Bitwise NOT
- `<<` Left shift
- `>>` Right shift
- Bitwise operators operate on integer values at the bit level.

### Operator Precedence
- Precedence determines which operators bind first.
- Associativity determines grouping when operators have the same precedence.
- Use parentheses `()` to make expressions clearer.
- Do not rely on precedence rules when parentheses improve readability.

```c
int result = 2 + 3 * 4;    // 14
int grouped = (2 + 3) * 4; // 20
```

## 10. Practice
- Complete the exercises and operator challenges.
- Test expressions with different input values.
- Check integer division, type conversions, and operator precedence.
- Compile and run programs to verify expected behavior.
