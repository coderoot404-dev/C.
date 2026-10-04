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

```text
C/
│
├── 01-loops/
│   ├── factorial_while.c
│   ├── odd_numbers_reverse.c
│   └── sum_with_loops.c
│
├── 02-patterns/
│   ├── pattern_decreasing_for.c
│   ├── pattern_increasing_do_while.c
│   ├── pattern_increasing_for.c
│   ├── pattern_increasing_while.c
│   └── square_star_pattern.c
│
├── 03-arrays/
│   ├── 1d/
│   │   ├── array_input.c
│   │   ├── array_max.c
│   │   ├── array_min.c
│   │   ├── array_reverse.c
│   │   ├── array_reverse_steps.c
│   │   ├── array_sum.c
│   │   └── array_traversal.c
│   │
│   └── 2d/
│       ├── array_2d_diagonal_sum.c
│       ├── array_2d_display.c
│       ├── array_2d_display_fixed.c
│       ├── array_2d_input.c
│       ├── array_2d_max.c
│       ├── array_2d_min.c
│       ├── array_2d_search.c
│       ├── array_2d_sum.c
│       └── array_2d_transpose.c
│
├── 04-pointers/
│   ├── pointer_basic.c
│   ├── pointer_double.c
│   └── pointer_reverse.c
│
├── 05-strings/
│   └── string_input_basic.c
│
└── 06-swap/
    ├── swap.c
    └── swap_array_six.c
```

---

## 🧩 Concepts Practiced

### Loops
- `for`
- `while`
- `do-while`
- Loop-based calculations

### Patterns
- Increasing patterns
- Decreasing patterns
- Square/star patterns
- Nested loops

### 1D Arrays
- Input
- Traversal
- Sum
- Minimum / maximum
- Reverse
- Step-by-step array operations

### 2D Arrays
- Matrix/grid input
- Display
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
gcc 03-arrays/1d/array_sum.c -o array_sum.exe
array_sum.exe
```

### Linux / macOS

```bash
gcc 03-arrays/1d/array_sum.c -o array_sum
./array_sum
```

Bas example ke taur par `array_sum.c` use kiya gaya hai. Kisi bhi file ka path de kar usay compile aur run kiya ja sakta hai.

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

- Meaningful filenames use karne hain.
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
