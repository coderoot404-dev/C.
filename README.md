# C Programming 🧠

> **Meri C programming learning journey — practice, mistakes, concepts aur progress.**

Ye repository meri **C programming practice** ka record hai. Yahan main concepts ko chhote programs se practice karta hoon taake sirf theory na parhoon balki **code → run → samjho → mistake fix karo → dobara practice** karoon.

Code intentionally simple rakha gaya hai. Important jagahon par **Roman Urdu comments** hain taake baad mein purana code jaldi samajh aa jaye.

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
| 07 | Functions | 🟢 Started |
| 08 | Structures | 🔜 Next |
| 09 | File Handling | 🔜 Next |
| 10 | Dynamic Memory | 🔜 Next |

> Status ka matlab 100% completion nahi; ye current practice progress ko show karta hai.

---

## 📁 Repository Structure

File names jaan-bujh kar **short aur simple** rakhe gaye hain. Folder se topic aur file name se program ka kaam samajh aa jata hai.

```text
C/
│
├── 01-loops/
│   ├── factorial.c
│   ├── odd_reverse.c
│   ├── loop_sum.c
│   ├── even_numbers.c
│   ├── sum_even.c
│   └── multiplication_table.c
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
│   │   ├── sum.c
│   │   ├── average.c
│   │   ├── sizeof.c
│   │   ├── search.c
│   │   ├── second_largest.c
│   │   ├── reverse.c
│   │   ├── reverse_steps.c
│   │   ├── bubble_sort_steps.c
│   │   └── traverse.c
│   │
│   └── 2d/
│       ├── input.c
│       ├── grid_input.c
│       ├── grid_functions.c
│       ├── grid_input_functions.c
│       ├── display.c
│       ├── grid_3x3.c
│       ├── sum.c
│       ├── max.c
│       ├── min.c
│       ├── search.c
│       ├── diagonal_sum.c
│       └── transpose.c
│
├── 04-pointers/
│   ├── basic.c
│   ├── double.c
│   └── reverse.c
│
├── 05-strings/
│   ├── input.c
│   ├── reverse.c
│   └── name_city.c
│
├── 06-swap/
│   ├── basic.c
│   └── array.c
│
└── 07-functions/
    ├── cube.c
    ├── table.c
    ├── global_scope.c
    └── number_guess.c
```

---

## 🧩 Concepts Practiced

### Loops
- `for`, `while`, `do-while`
- Factorial
- Odd/even numbers
- Even numbers ka sum
- Multiplication table

### Patterns
- Increasing/decreasing patterns
- Square/star patterns
- Nested loops

### 1D Arrays
- Input, traversal, sum
- Minimum / maximum
- Average
- `sizeof` se array length
- Linear search
- Reverse
- Second largest
- Bubble sort

### 2D Arrays
- Matrix/grid input
- Nested loops
- Functions mein 2D array pass karna
- Sum, min/max, search
- Diagonal sum
- Transpose

### Pointers
- Addresses
- Dereferencing
- Pointer arithmetic
- Arrays with pointers
- Passing addresses to functions

### Strings
- Basic input
- Character arrays
- `fgets`
- Newline removal
- String reverse

### Functions
- Function declaration/definition
- Parameters
- Return values
- `void` functions
- Global scope
- Helper functions

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

Kisi bhi file ka path de kar usay compile aur run kiya ja sakta hai.

---

## 📝 My Learning Style

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

Ye production-level software repository nahi hai. Iska main purpose **C fundamentals ko genuinely samajhna aur practice history maintain karna** hai.

---

## 🧹 Repository Rules

- Short aur meaningful filenames.
- Related programs ko relevant folder mein rakhna.
- Important logic par Roman Urdu comments.
- `.exe`, `.out`, `.o` aur temporary editor files commit nahi karni.
- Duplicate practice ko unnecessarily repeat nahi karna.
- Naya concept aaye to proper folder/file naming maintain karni.

---

## 🚀 What's Next?

Aage gradually:

- More functions practice
- Recursion
- Structures / unions
- Dynamic memory allocation
- File handling
- More pointer practice
- More array/string problems
- Small C projects

> **Small programs today → strong C fundamentals tomorrow.** 💻
