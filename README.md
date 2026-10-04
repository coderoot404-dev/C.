# C Programming 🧠

> **Meri C programming learning journey — practice, mistakes, concepts aur progress.**

Ye repository meri **C programming practice** ka record hai. Yahan main jo concepts seekhta hoon, unke chhote programs likhta hoon taake sirf theory na parhoon balki khud **code → run → samjho → dobara practice** karoon.

Code intentionally simple rakha gaya hai. Important jagahon par **Roman Urdu comments** bhi hain taake kuch time baad jab main purana code dekhoon to mujhe dobara samajhne mein mushkil na ho.

---

## 📚 Learning Roadmap

| # | Topic | Status |
|---|---|---|
| 01 | Loops | 🟢 Practice |
| 02 | Patterns | 🟢 Practice |
| 03 | Arrays | 🟢 Practice |
| 04 | Pointers | 🟢 Practice |
| 05 | Strings | 🟢 Practice |
| 06 | Swapping | 🟢 Practice |
| 07 | Functions | 🔜 Next |
| 08 | Structures | 🔜 Next |
| 09 | File Handling | 🔜 Next |
| 10 | Dynamic Memory | 🔜 Next |

> **Note:** Status ka matlab ye nahi ke topic 100% complete hai. Ye sirf meri current practice/progress ko show karta hai.

---

## 📁 Repository Structure

File names jaan-bujh kar **short aur simple** rakhe gaye hain. Folder dekh kar topic samajh aa jayega, aur file name dekh kar program ka kaam.

```text
C/
│
├── 01-loops/
│   ├── factorial.c
│   ├── odd_reverse.c
│   └── loop_sum.c
│
├── 02-patterns/
│   ├── decreasing.c
│   ├── increasing_do.c
│   ├── increasing_for.c
│   ├── increasing_while.c
│   └── square.c
│
├── 03-arrays/
│   ├── 1d/
│   │   ├── input.c
│   │   ├── max.c
│   │   ├── min.c
│   │   ├── reverse.c
│   │   ├── reverse_steps.c
│   │   ├── sum.c
│   │   └── traverse.c
│   │
│   └── 2d/
│       ├── diagonal_sum.c
│       ├── display.c
│       ├── grid_3x3.c
│       ├── input.c
│       ├── max.c
│       ├── min.c
│       ├── search.c
│       ├── sum.c
│       └── transpose.c
│
├── 04-pointers/
│   ├── basic.c
│   ├── double.c
│   └── reverse.c
│
├── 05-strings/
│   └── input.c
│
└── 06-swap/
    ├── basic.c
    └── array.c
```

---

## 🧩 Concepts Practiced

### Loops
- `for`
- `while`
- `do-while`
- Factorial
- Odd numbers in reverse
- Sum using different loops

### Patterns
- Increasing patterns
- Decreasing patterns
- Square/star pattern
- Nested loops

### 1D Arrays
- Input
- Traversal
- Sum
- Minimum / maximum
- Reverse
- Reverse with step-by-step output

### 2D Arrays
- Matrix/grid input
- Display
- 3×3 grid
- Sum
- Minimum / maximum
- Search
- Diagonal sum
- Transpose

### Pointers
- Addresses
- Dereferencing
- Pointer arithmetic
- Arrays with pointers
- Passing addresses to functions

### Strings
- Basic string input
- Character arrays
- String length / input handling

### Swapping
- Swapping variables using pointers
- Array element swapping

---

## ▶️ How to Run

Har `.c` file ek independent practice program hai.

### Windows

```bash
gcc 03-arrays/1d/sum.c -o sum.exe
sum.exe
```

### Linux / macOS

```bash
gcc 03-arrays/1d/sum.c -o sum
./sum
```

Bas example ke taur par `sum.c` use kiya gaya hai. Kisi bhi file ka path de kar usay compile aur run kiya ja sakta hai.

---

## 📝 My Learning Style

Main is repository mein code ko unnecessarily complicated nahi rakhta.

Mera focus hai:

```text
Learn
  ↓
Write Code
  ↓
Run It
  ↓
Understand Mistakes
  ↓
Fix It
  ↓
Practice Again
  ↓
Move to Next Concept
```

Agar purana code perfect nahi hai to bhi usay learning history ka part samjha jata hai. Har program ka purpose **seekhna** hai, production-level software banana nahi.

---

## 🧹 Repository Rules

- Short aur meaningful filenames use karne hain.
- Related programs ko relevant folder mein rakhna hai.
- Important logic par Roman Urdu comments add karne hain.
- Compiled files (`.exe`, `.out`, `.o`) commit nahi karni.
- Temporary editor files commit nahi karni.
- Naya concept aaye to uske liye proper folder/file naming maintain karni hai.

---

## 🚀 What's Next?

Aage ja kar is repository mein gradually ye concepts add karne hain:

- Functions
- Recursion
- Structures
- Unions
- Dynamic memory allocation
- File handling
- More pointer practice
- More array/string problems
- Small C projects

**Goal:** C ko sirf dekh kar nahi, balki khud code likh kar genuinely samajhna. 💻

---

### ⭐ One step at a time

> **Small programs today → strong C fundamentals tomorrow.**
