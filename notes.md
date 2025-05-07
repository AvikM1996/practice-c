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
