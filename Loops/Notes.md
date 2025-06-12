
# 📚 Understanding `while` and `do...while` Loops

---

## 👩‍🏫 Teacher: Let's start with the basics.

A **loop** is just a way to **repeat a block of code** multiple times until a certain condition is met.

We’ll talk about two types today:
1. `while` loop
2. `do...while` loop

---

## 🧑‍🎓 Student: What’s a `while` loop?

### 🔁 `while` Loop

- Checks the condition **before** running the loop body.
- If the condition is `false` at the start, it **might not run even once**.

### 📋 Syntax:

```cpp
while (condition) {
    // code to repeat
}
```

### 📌 Example:

```cpp
int n = 3;
while (n > 0) {
    cout << n << endl;
    n--;
}
```

### 🔍 What happens:

```
1. Check if n > 0 → yes (3)
2. Print 3, then n = 2
3. Check if n > 0 → yes (2)
4. Print 2, then n = 1
5. Check if n > 0 → yes (1)
6. Print 1, then n = 0
7. Check if n > 0 → no → exit loop
```

---

## 🧑‍🎓 Student: Cool! So what’s a `do...while` loop then?

### 🔂 `do...while` Loop

- The loop body runs **first**, then the condition is checked.
- So, it **always runs at least once**, even if the condition is false from the beginning.

### 📋 Syntax:

```cpp
do {
    // code to repeat
} while (condition);
```

### 📌 Example:

```cpp
int n = 0;
do {
    cout << "Hello once!" << endl;
} while (n > 0);
```

### 🔍 What happens:

```
1. Run the loop → prints "Hello once!"
2. Check if n > 0 → no → exit loop
```

### 🧠 Key Difference:
| Feature               | `while` loop        | `do...while` loop      |
|-----------------------|---------------------|------------------------|
| Condition checked at  | Beginning            | End                    |
| Guaranteed to run once| ❌ No                | ✅ Yes                 |
| Syntax end with       | Just `}`             | `} while(condition);`  |

---

## 🧑‍🎓 Student: When should I use which?

### ✨ Use `while` loop when:
- You want to **run only if condition is true**.

### 🌟 Use `do...while` loop when:
- You want to **run the loop at least once**, no matter what.

---

## ✅ Quick Quiz (Try answering yourself!):

1. Will this `while` loop run?
```cpp
int n = 0;
while (n > 0) {
    cout << "Run" << endl;
}
```

2. Will this `do...while` loop run?
```cpp
int n = 0;
do {
    cout << "Run" << endl;
} while (n > 0);
```

---

## 👩‍🏫 Teacher: Great job! You’ve learned:
- What `while` and `do...while` loops are
- Their syntax and use cases
- The difference between them in simple terms

Keep practicing! 🧠💪

