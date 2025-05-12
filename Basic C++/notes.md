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

