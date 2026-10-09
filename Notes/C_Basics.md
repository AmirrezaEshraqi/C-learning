# C Basics

Short notes from my C practice.

## 1. Getting Started
- C is a compiled programming language.
- `#include <stdio.h>` gives access to functions like `printf()`.
- `main()` is where a hosted C program starts.
- `return 0;` indicates successful program termination.

## 2. Syntax
- Most statements end with `;`.
- Use `{}` to group statements into a block.
- C is case-sensitive (`age` and `Age` are different).
- Strings use double quotes; character constants use single quotes.

## 3. Output
- `printf()` prints text and formatted values.
- `\n` moves to a new line.
- Format specifiers should match the argument types.

| Specifier | Used for |
|---|---|
| `%d` | `int` |
| `%f` | `float` or `double` in `printf()` |
| `%c` | Character |
| `%s` | String |
| `%zu` | `size_t` |

## 4. Comments
- `//` for a single-line comment.
- `/* ... */` for a block comment.
- Comments explain code; they don't change what it does.

## 5. Variables
- Declare a variable with a type and a name.
- Initialize it if you need a starting value.
- Local variables aren't automatically initialized.

```c
int age = 18;
float temperature = 24.5f;
char grade = 'A';
```

## 6. Data Types
- `char`: character-sized integer type.
- `int`: integer values.
- `float`: floating-point values.
- `double`: floating-point values with at least as much precision as `float`.
- `short`, `long`, `signed`, and `unsigned` modify integer types.
- Type sizes depend on the implementation.
- `sizeof` gives an object's or type's size in bytes.

```c
printf("%zu\n", sizeof(int));
```

## 7. Type Conversion
- C can convert values automatically.
- A cast requests an explicit conversion.
- Integer division drops the fractional part.
- Converting a floating-point value to an integer truncates toward zero.

```c
int a = 5 / 2;           // 2
double b = 5.0 / 2;      // 2.5
int c = (int)3.9;        // 3
```

## 8. Constants
- `const` prevents modification through that identifier.
- `#define` creates a preprocessor macro.
- Use meaningful names for values that shouldn't change.

```c
const int max_size = 100;
#define BUFFER_SIZE 256
```

## 9. Operators

### Arithmetic
- `+` addition
- `-` subtraction
- `*` multiplication
- `/` division
- `%` remainder (integer operands)
- `++` increment
- `--` decrement

### Assignment
- `=` assignment
- `+=`, `-=`, `*=`, `/=`, `%=` compound assignment
- `&=`, `|=`, `^=`, `<<=`, `>>=` bitwise compound assignment

```c
int x = 5;
x += 3;  // x is now 8
```

### Comparison
- `==` equal
- `!=` not equal
- `>` greater than
- `<` less than
- `>=` greater than or equal
- `<=` less than or equal
- Comparisons produce `0` or `1` in C.

### Logical
- `&&` AND
- `||` OR
- `!` NOT
- `0` is false; nonzero values are true in conditions.
- `&&` and `||` can skip evaluating the second operand.

### Bitwise
- `&` AND
- `|` OR
- `^` XOR
- `~` NOT
- `<<` left shift
- `>>` right shift
- These operators work on integer values at the bit level.

### Precedence
- Precedence decides which operators group first.
- Parentheses make the intended order clear.

```c
int a = 2 + 3 * 4;     // 14
int b = (2 + 3) * 4;   // 20
```

## Practice
- Try the examples by compiling and running them.
- Change the values and check the results.
- Pay attention to integer division, conversions, and operator precedence.

Source: [W3Schools C Tutorial](https://www.w3schools.com/c/index.php)
