## C++ Notes: main() Function, int Functions, and cout

---

### 📌 C++ `main()` Function

#### What is `main()`?

* The **entry point** of every C++ program.

#### Syntax:

```cpp
int main() {
    // code
    return 0;
}
```

#### Explanation:

* `int` means the function returns an **integer** to the OS.
* `return 0;` means the program ended **successfully**.
* `return 1;` or any **non-zero** value indicates an **error**.

---

### 📉 What is an `int` Function?

#### ✅ Definition:

A function that returns an **integer (`int`) value**.

#### 🔹 Example:

```cpp
int add(int a, int b) {
    return a + b;
}

int result = add(5, 3);  // result = 8
```

#### Purpose:

Used when you need to return a **whole number** from a function.

---

### ✅ Understanding `cout` in C++

#### 📌 What is `cout`?

* `cout` stands for **Character Output**.
* Used to **display output** on the screen.
* Comes from the **Standard Library**, specifically the `<iostream>` header.

#### 🔹 Syntax:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

---

### 🧠 Breakdown:

| Component              | Meaning                                               |
| ---------------------- | ----------------------------------------------------- |
| `#include <iostream>`  | Includes the input/output stream library.             |
| `cout`                 | Standard output stream object (from `std` namespace). |
| `<<`                   | Insertion operator (sends data to `cout`).            |
| `using namespace std;` | Avoids prefixing `std::` every time.                  |
| `endl`                 | Ends the line and flushes the output buffer.          |

---

### 📓 Summary Notes

| Keyword/Concept        | Description                                 |
| ---------------------- | ------------------------------------------- |
| `cout`                 | Outputs data to console (from `<iostream>`) |
| `<<`                   | Insertion operator used with `cout`         |
| `#include<iostream>`   | Includes standard input-output functions    |
| `using namespace std;` | Avoids prefixing with `std::` every time    |
| `endl`                 | Ends the line, like `\n` but safer          |


Every program wil have three points

input
process
output

# 📘 C++ Input/Output & String Handling - Notes

---

## 🔹 1. Basic `cin` and `cout` Syntax

```cpp
#include <iostream>

int main() {
    int a, b, sum;
    std::cout << "ENTER FIRST NUMBER: ";
    std::cin >> a;
    std::cout << "ENTER SECOND NUMBER: ";
    std::cin >> b;
    sum = a + b;
    std::cout << "SUM OF TWO NUMBERS: " << sum;
    return 0;
}
```

### ✅ Notes:
- `std::cout` is used for **output**.
- `std::cin` is used for **input**.
- `>>` is the **extraction operator** (cin).
- `<<` is the **insertion operator** (cout).
- Always use `#include <iostream>`.

---

## 🔹 2. Taking Input Strings Without Spaces

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "ENTER YOUR NAME: ";
    std::cin >> name;
    std::cout << "HELLO " << name << " WELCOME TO C++ PROGRAMMING";
    return 0;
}
```

### ⚠️ Limitation:
- `std::cin >> name;` only reads **up to first space**.

**Example Input:** `Avishek Maity`  
**Output:** `HELLO Avishek WELCOME TO C++ PROGRAMMING`

---

## 🔹 3. Taking Full Line Input With Spaces (`getline`)

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "ENTER YOUR NAME: ";
    std::getline(std::cin, name);
    std::cout << "HELLO " << name << " WELCOME TO C++ PROGRAMMING";
    return 0;
}
```

### ✅ Notes:
- `std::getline(std::cin, name)` reads **entire line including spaces**.
- Always `#include <string>` to avoid compiler errors.

---

## 🔹 4. Common Errors & Fixes

| ❌ Issue | 💡 Fix |
|---------|--------|
| `namespace "std" has no member "getline"` | Add `#include <string>` |
| Input skips `getline` after `cin` | Use `std::cin.ignore();` before `getline` |
| Garbage value on uninitialized variable | Always assign initial values or check `cin` success |

---

## 🔹 5. Example: Combining `cin` and `getline`

```cpp
#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();  // Ignore leftover newline

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    std::cout << "Hello " << name << ", you are " << age << " years old.";
    return 0;
}
```

---

## 📝 Bonus Tips:
- Use `std::endl` or `\n` for line breaks.
- Variable types must match input (e.g., don't input string into an `int`).
- Check input validity using `if (!(std::cin >> var))`.

# 📘 C++ Data Types and Sizes

| **Data Type**            | **Keyword**                   | **Size (Bytes)** | **Description**                             |
|--------------------------|-------------------------------|------------------|---------------------------------------------|
| **Integer Types**        |                               |                  |                                             |
| Integer                  | `int`                         | 4                | Standard integer                            |
| Short Integer            | `short int` / `short`         | 2                | Smaller range integer                       |
| Long Integer             | `long int` / `long`           | 4 or 8           | Larger range integer                        |
| Long Long Integer        | `long long int` / `long long` | 8                | Very large integer                          |
| Unsigned Integer         | `unsigned int`                | 4                | Integer without negative values             |

| **Floating Point Types** |                               |                  |                                             |
| Float                    | `float`                       | 4                | Single precision floating point             |
| Double                   | `double`                      | 8                | Double precision floating point             |
| Long Double              | `long double`                 | 8 to 16          | Extended precision, compiler-dependent      |

| **Character Types**      |                               |                  |                                             |
| Character                | `char`                        | 1                | Single character (ASCII)                    |
| Unsigned Char            | `unsigned char`               | 1                | Char with only positive values              |

| **Boolean Type**         |                               |                  |                                             |
| Boolean                  | `bool`                        | 1                | Represents true or false                    |

| **Wide Character**       |                               |                  |                                             |
| Wide Char                | `wchar_t`                     | 2 or 4           | Wide character for Unicode text             |

> ⚠️ Note: Sizes may vary based on platform (32-bit vs 64-bit) and compiler. Use `sizeof(type)` to check on your machine.
"""

# 📘 C++ Data Types and Sizes

---

## 🔹 What Are Primitive Data Types?

Primitive data types are the most basic data types provided by the C++ language. They serve as the building blocks for data manipulation and are not made from any other data types.

---

## 🔸 Primitive Data Types in C++

| **Category**         | **Data Type**         | **Keyword**            | **Size (Bytes)** | **Example**     |
|----------------------|------------------------|-------------------------|------------------|-----------------|
| Integer              | Integer                | `int`                  | 4                | `int a = 10;`   |
|                      | Short Integer          | `short`                | 2                | `short s = 5;`  |
|                      | Long Integer           | `long`                 | 4 or 8           | `long l = 50;`  |
|                      | Long Long Integer      | `long long`            | 8                | `long long ll = 100000;` |
| Floating Point       | Float                  | `float`                | 4                | `float f = 3.14f;` |
|                      | Double                 | `double`               | 8                | `double d = 3.1415;` |
|                      | Long Double            | `long double`          | 8 to 16          | `long double ld = 3.141592;` |
| Character            | Character              | `char`                 | 1                | `char c = 'A';` |
| Boolean              | Boolean                | `bool`                 | 1                | `bool flag = true;` |
| Wide Character       | Wide Char              | `wchar_t`              | 2 or 4           | `wchar_t wc = L'अ';` |
| Unsigned Types       | Unsigned Integer       | `unsigned int`         | 4                | `unsigned int x = 100;` |
|                      | Unsigned Char          | `unsigned char`        | 1                | `unsigned char uc = 'B';` |

---

## ⚠️ Notes:
- Sizes may vary across platforms (32-bit vs 64-bit).
- Use `sizeof(datatype)` in C++ to check actual size on your system.
- C++ also includes non-primitive (derived/user-defined) types like arrays, structs, classes, etc.

---

## 🧪 Example to Print Size

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    return 0;
}

# 📘 Operator Precedence & Expressions in C++

---

## 🔹 What is Operator Precedence?

Operator precedence determines the order in which operators are evaluated in an expression. Higher precedence operators are evaluated before lower precedence ones.

---

## 🔸 Associativity

When two operators of the same precedence appear in an expression, associativity determines the direction of evaluation.

- **Left-to-Right (L→R)**: Most operators (e.g., `+`, `-`, `*`, `/`)
- **Right-to-Left (R→L)**: Assignment operators (e.g., `=`, `+=`, `-=`) and some unary operators

---

## 🔸 Common Operator Precedence Table

| **Precedence** | **Operators**                                  | **Associativity** | **Category**                |
|----------------|------------------------------------------------|-------------------|-----------------------------|
| 1 (Highest)    | `()` `[]` `.` `->`                             | Left to Right     | Postfix                     |
| 2              | `++` `--` `+` `-` `!` `~` `*` `&` `sizeof`     | Right to Left     | Unary                       |
| 3              | `*` `/` `%`                                    | Left to Right     | Multiplicative              |
| 4              | `+` `-`                                        | Left to Right     | Additive                    |
| 5              | `<<` `>>`                                      | Left to Right     | Shift                       |
| 6              | `<` `<=` `>` `>=`                              | Left to Right     | Relational                  |
| 7              | `==` `!=`                                      | Left to Right     | Equality                    |
| 8              | `&`                                            | Left to Right     | Bitwise AND                 |
| 9              | `^`                                            | Left to Right     | Bitwise XOR                 |
| 10             | `|`                                            | Left to Right     | Bitwise OR                  |
| 11             | `&&`                                           | Left to Right     | Logical AND                 |
| 12             | `||`                                           | Left to Right     | Logical OR                  |
| 13             | `?:`                                           | Right to Left     | Conditional (ternary)       |
| 14             | `=`, `+=`, `-=`, `*=`, `/=`, etc.              | Right to Left     | Assignment                  |
| 15 (Lowest)    | `,`                                            | Left to Right     | Comma                       |

---

## 🔸 Example: Operator Precedence

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 3 + 4 * 5;
    cout << "Result: " << result << endl;  // Output: 23
    return 0;
}
// * has higher precedence than +, so: 4*5 = 20, then 3+20 = 23

## 🔹 1. Arithmetic Operators

| Operator | Description        | Example     |
|----------|--------------------|-------------|
| `+`      | Addition            | `a + b`     |
| `-`      | Subtraction         | `a - b`     |
| `*`      | Multiplication      | `a * b`     |
| `/`      | Division            | `a / b`     |
| `%`      | Modulus (remainder)| `a % b`     |

---

## 🔹 2. Assignment Operators

| Operator | Description           | Example   |
|----------|-----------------------|-----------|
| `=`      | Assign value          | `a = 10`  |
| `+=`     | Add and assign        | `a += 5`  |
| `-=`     | Subtract and assign   | `a -= 2`  |
| `*=`     | Multiply and assign   | `a *= 3`  |
| `/=`     | Divide and assign     | `a /= 4`  |
| `%=`     | Modulus and assign    | `a %= 3`  |

---

## 🔹 3. Relational (Comparison) Operators

| Operator | Description         | Example   |
|----------|---------------------|-----------|
| `==`     | Equal to            | `a == b`  |
| `!=`     | Not equal to        | `a != b`  |
| `>`      | Greater than        | `a > b`   |
| `<`      | Less than           | `a < b`   |
| `>=`     | Greater or equal to | `a >= b`  |
| `<=`     | Less or equal to    | `a <= b`  |

---

## 🔹 4. Logical Operators

| Operator | Description      | Example          |
|----------|------------------|------------------|
| `&&`     | Logical AND       | `a > 0 && b > 0` |
| `||`     | Logical OR        | `a > 0 || b > 0` |
| `!`      | Logical NOT       | `!a`             |

---

## 🔹 5. Bitwise Operators

| Operator | Description   | Example     |
|----------|---------------|-------------|
| `&`      | Bitwise AND   | `a & b`     |
| `|`      | Bitwise OR    | `a | b`     |
| `^`      | Bitwise XOR   | `a ^ b`     |
| `~`      | Bitwise NOT   | `~a`        |
| `<<`     | Left shift    | `a << 2`    |
| `>>`     | Right shift   | `a >> 2`    |

---

## 🔹 6. Unary Operators

| Operator | Description     | Example        |
|----------|-----------------|----------------|
| `++`     | Increment        | `++a` or `a++` |
| `--`     | Decrement        | `--a` or `a--` |
| `+`      | Unary plus       | `+a`           |
| `-`      | Unary minus      | `-a`           |

---

## 🔹 7. Ternary Operator

| Operator | Description          | Example         |
|----------|----------------------|------------------|
| `? :`    | Conditional (if-else)| `a > b ? a : b` |

---

# Compound Assignment in JavaScript

Compound assignment operators combine an arithmetic or bitwise operation with assignment. They offer a shorthand way to update the value of a variable.

---

## Syntax

```javascript
a = a + b; // Can be shortened to:
a += b;
```

---

## Common Compound Assignment Operators

| Operator | Description          | Example    | Equivalent To |       |         |     |
| -------- | -------------------- | ---------- | ------------- | ----- | ------- | --- |
| `+=`     | Addition             | `a += b`   | `a = a + b`   |       |         |     |
| `-=`     | Subtraction          | `a -= b`   | `a = a - b`   |       |         |     |
| `*=`     | Multiplication       | `a *= b`   | `a = a * b`   |       |         |     |
| `/=`     | Division             | `a /= b`   | `a = a / b`   |       |         |     |
| `%=`     | Modulo (Remainder)   | `a %= b`   | `a = a % b`   |       |         |     |
| `**=`    | Exponentiation       | `a **= b`  | `a = a ** b`  |       |         |     |
| `<<=`    | Left Shift           | `a <<= b`  | `a = a << b`  |       |         |     |
| `>>=`    | Right Shift          | `a >>= b`  | `a = a >> b`  |       |         |     |
| `>>>=`   | Unsigned Right Shift | `a >>>= b` | `a = a >>> b` |       |         |     |
| `&=`     | Bitwise AND          | `a &= b`   | `a = a & b`   |       |         |     |
| `^=`     | Bitwise XOR          | `a ^= b`   | `a = a ^ b`   |       |         |     |
| \`       | =\`                  | Bitwise OR | \`a           | = b\` | \`a = a | b\` |

---

## Example

```javascript
let x = 10;
x += 5;   // x = x + 5 => x = 15
x *= 2;   // x = x * 2 => x = 30
console.log(x);  // 30
```

---

## Benefits

* **Concise code**: Reduces redundancy
* **Improved readability**: Easier to follow operations

---

## Notes

* Compound assignment is especially useful in loops, conditionals, and arithmetic-heavy code.
* These operators work with both numbers and some other types like strings (e.g., `+=` with strings for concatenation).

```javascript
let str = "Hello, ";
str += "World!";  // str = "Hello, World!"
```

# Pre-Increment and Post-Increment in C++

In C++, increment operators (`++`) can be used in two forms:

* **Pre-increment (`++var`)**: Increments the value, then returns the updated value.
* **Post-increment (`var++`)**: Returns the current value, then increments it.

---

## Syntax and Behavior

```cpp
int a = 5;
int b = ++a; // a becomes 6, b is assigned 6 (pre-increment)

int x = 5;
int y = x++; // y is assigned 5, x becomes 6 (post-increment)
```

---

## Operator Precedence Example

Operator precedence determines how expressions are evaluated when multiple operators are present.

```cpp
int a = 5;
int result = a++ * 2; // post-increment
// result = 5 * 2 = 10, a becomes 6

int b = 5;
int result2 = ++b * 2; // pre-increment
// b becomes 6, result2 = 6 * 2 = 12
```

### Precedence Rule:

* `++` (increment) has **higher precedence** than `*` (multiplication).
* In post-increment, the value used is the **original** value before incrementing.

---

## Real-Life Example

Imagine a **ticket counter** where a token is issued:

### Post-Increment (`token++`):

```cpp
int token = 1;
int issuedToken = token++;
// issuedToken = 1, token becomes 2
```

**Use Case:** Issue the current token, then update the counter.

### Pre-Increment (`++token`):

```cpp
int token = 1;
int issuedToken = ++token;
// token becomes 2, issuedToken = 2
```

**Use Case:** Update the counter first, then issue the next token.

---

## Summary

| Form    | Operation Order     | Value Used In Expression | When to Use                            |
| ------- | ------------------- | ------------------------ | -------------------------------------- |
| `++var` | Increment, then use | Updated value            | When you need the incremented value    |
| `var++` | Use, then increment | Original value           | When you need the original value first |

---

## Notes

* Avoid using multiple increments in a single complex expression — it may lead to **undefined behavior**.
* Always write increment expressions clearly to ensure predictable outcomes.

```cpp
// Avoid this:
int a = 5;
int b = a++ + ++a; // May be confusing or undefined
```

🔍 What Is the Main Reason for Overflow in C++?

⚙️ The Background Process (Internals Explained)

## 🧠 Simple Summary:
Overflow happens because C++ stores numbers in fixed-size memory slots (like 8-bit, 16-bit, 32-bit), and when a number goes beyond what can fit in that space, it wraps around due to binary limits.

## 📦 Let's Take char (1 byte = 8 bits)
   1) A signed char uses 1 bit for sign and 7 bits for value.
   2) Max positive value: 01111111 → 127
   3) When you add 1: 01111111 + 1 = 10000000 → which represents -128 in two's complement form.

## 🔁 Two's Complement: The Core Mechanism
C++ uses two's complement to represent negative numbers. This is why the value wraps around when overflow occurs.
   127   → 01111111 (binary)
   +1    → 10000000 (binary) → this is -128

## ⚠️ Overflow Is Silent in C++
Unlike some languages (like Python or Java with checks), C++ does not throw an error on overflow. It just:
  1) Continues execution
  2) Returns the wrapped value
  3) Can cause bugs if not checked

## 🛠 Behind the Scenes (System-Level Explanation)
  1) CPU stores and calculates numbers in binary using fixed registers.
  2) If result of an operation is too big, extra bits are truncated (cut off).
  3) The final binary result is then interpreted incorrectly due to overflow.

## 💡 Analogy (Layman-Level)
Imagine a digital clock that shows only hours from 0 to 23.
   1) If it's 23 and you add 1 hour → it becomes 0 (wrap around).
   2) That’s overflow!



# 🧮 Bitwise Operators in C++ – Explained with Examples

---

## 🧠 What Are Bitwise Operators?

Bitwise operators operate on individual bits of data.  
They are used in low-level programming, performance optimization, flags, and embedded systems.

---

## 🔧 Bitwise Operators Table

| Operator | Symbol | Meaning                        | Example (`a = 5, b = 3`) |
|----------|--------|--------------------------------|---------------------------|
| AND      | `&`    | Bitwise AND                    | `a & b` = `1`             |
| OR       | `|`    | Bitwise OR                     | `a | b` = `7`             |
| XOR      | `^`    | Bitwise XOR (exclusive OR)     | `a ^ b` = `6`             |
| NOT      | `~`    | Bitwise NOT (1's complement)   | `~a` = `-6`               |
| Left Shift | `<<` | Shifts bits left (multiply)    | `a << 1` = `10`           |
| Right Shift | `>>`| Shifts bits right (divide)     | `a >> 1` = `2`            |

---

## 🔢 Binary Breakdown of Example

Let’s take:
```cpp
int a = 5;  // 0101
int b = 3;  // 0011
```

### AND (`a & b`)
```
  0101
& 0011
= 0001 (1)
```

### OR (`a | b`)
```
  0101
| 0011
= 0111 (7)
```

### XOR (`a ^ b`)
```
  0101
^ 0011
= 0110 (6)
```

### NOT (`~a`)
```
~0101 = 1010 (in 2's complement: -6)
```

---

## 🚀 Shift Operators

### Left Shift (`<<`)
```cpp
int x = 5;   // 0101
x << 1 → 1010 (10)
x << 2 → 10100 (20)
```

Shifting left by `n` = Multiply by `2^n`

---

### Right Shift (`>>`)
```cpp
int x = 20;  // 10100
x >> 1 → 01010 (10)
x >> 2 → 00101 (5)
```

Shifting right by `n` = Divide by `2^n` (for unsigned)

---

## ⚠️ Note on Negative Numbers

- For signed integers, right shift may **preserve the sign bit**
- Left shifting into sign bit may cause **undefined behavior**

---

## 🧪 Practical Use Cases

- **Flags & Permissions**: Set/clear/check bits
- **Performance**: Fast multiply/divide by powers of 2
- **Embedded Systems**: Control hardware registers
- **Cryptography**: Uses XOR for encryption

---

## ✅ Summary Table

| Operator | Name        | Quick Use Case                  |
|----------|-------------|----------------------------------|
| `&`      | AND         | Masking bits                    |
| `|`      | OR          | Setting bits                    |
| `^`      | XOR         | Toggle bits                     |
| `~`      | NOT         | Invert bits                     |
| `<<`     | Left Shift  | Multiply by 2, bit packing      |
| `>>`     | Right Shift | Divide by 2, bit unpacking      |

---

## 📌 Final Tip

Use binary literals in C++14+:
```cpp
int a = 0b0101;
```

Makes your bitwise operations much easier to understand!


# 📘 `enum` and `typedef` in C++ – Explained with Examples

---

## 🧱 What is `enum` in C++?

`enum` (short for *enumeration*) is a user-defined type that consists of a set of named integer constants.

### 🔹 Syntax:
```cpp
enum Color { RED, GREEN, BLUE };
```

Each value gets an integer automatically:
- `RED = 0`
- `GREEN = 1`
- `BLUE = 2`

### 🔹 Example:
```cpp
#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = GREEN;
    cout << "Color value: " << c << endl;  // Output: 1
    return 0;
}
```

---

## 🎯 Why Use `enum`?

- Improves code readability
- Easier to maintain than plain integers
- Prevents magic numbers

---

## 🛠 Custom Values in `enum`
```cpp
enum Status {
    OK = 200,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};
```

---

## 🆕 `enum class` (C++11 and later)

**Strongly typed and scoped enumeration**:
```cpp
enum class Direction { LEFT, RIGHT };

Direction d = Direction::LEFT;  // No implicit int conversion
```

✅ Safer than traditional enums.

---

## 🧱 What is `typedef` in C++?

`typedef` creates a new name (alias) for an existing data type.

### 🔹 Syntax:
```cpp
typedef existing_type new_name;
```

### 🔹 Example:
```cpp
typedef unsigned int uint;

uint age = 25;  // same as: unsigned int age = 25;
```

---

## 🎯 Why Use `typedef`?

- Simplifies complex types
- Makes code cleaner and easier to understand

---

## 🧱 Example with Struct and Typedef

### Without typedef:
```cpp
struct Student {
    int id;
    char name[50];
};
struct Student s1;
```

### With typedef:
```cpp
typedef struct {
    int id;
    char name[50];
} Student;

Student s1;
```

---

## 🆕 Modern Alternative: `using` (C++11)

```cpp
using uint = unsigned int;
```

✅ Recommended over `typedef` in modern C++

---

## ✅ Summary

| Feature     | `enum`                               | `typedef`                                |
|-------------|--------------------------------------|-------------------------------------------|
| Purpose     | Define named constants               | Define type aliases                       |
| Default Type| `int`                                | Depends on what you alias                 |
| New Version | `enum class` (C++11+)                | `using` (C++11+)                          |
| Example     | `enum Days { MON, TUE }`             | `typedef unsigned int uint`              |
| Use Case    | Status codes, modes, categories      | Shortening long type names                |

---

## 📌 Final Tip

Prefer:
- `enum class` over traditional `enum` for safety
- `using` over `typedef` for modern C++ readability


