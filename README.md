# C Programming 🧠

> **Meri C programming learning journey — code, concepts, mistakes aur progress.**

Ye repository meri **C programming practice** ka organized record hai. Har folder ek topic hai aur har `.c` file ka ek clear purpose hai.

**README ka goal:** koi bhi banda repo open kare aur bina files kholay samajh jaye ke **kahan kya hai, kis file mein kya practice ho rahi hai, aur kis concept ke liye kaunsi file use karni hai.**

---

# 🗺️ Complete Learning Map

| # | Folder | Main Focus | Status |
|---|---|---|---|
| 01 | `01-loops` | Loops + basic calculations | 🟢 Practice |
| 02 | `02-patterns` | Nested loops + patterns | 🟢 Practice |
| 03 | `03-arrays` | 1D & 2D arrays | 🟢 Practice |
| 04 | `04-pointers` | Addresses, dereference, pointer use | 🟢 Practice |
| 05 | `05-strings` | Character arrays + string handling | 🟢 Practice |
| 06 | `06-swap` | Swapping using variables/pointers | 🟢 Practice |
| 07 | `07-functions` | Functions, parameters, return values, scope | 🟢 Started |
| 08 | `08-structures` | Structures / custom data | 🔜 Next |
| 09 | `09-file-handling` | Files read/write | 🔜 Next |
| 10 | `10-dynamic-memory` | `malloc`, `calloc`, `realloc`, `free` | 🔜 Next |

> 🟢 = actively practiced &nbsp;&nbsp; 🔜 = future learning topic

---

# 📚 File-by-File Guide

## 01 — Loops 🔁

**Folder:** `01-loops/`

Yahan basic loops aur loop-based calculations practice ki hain.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `factorial.c` | Number ka factorial calculate karta hai | `while` loop, multiplication |
| `odd_reverse.c` | Odd numbers ko reverse order mein print karta hai | Reverse loop, condition |
| `loop_sum.c` | Numbers ka sum different loops se practice karta hai | `for`, `while`, `do-while` |
| `even_numbers.c` | Range mein even numbers print karta hai | Loop + `if` + modulus |
| `sum_even.c` | Range ke even numbers ka total nikalta hai | Loop + condition + accumulator |
| `multiplication_table.c` | Kisi number ki 1–10 table print karta hai | Loop + arithmetic |

**Agar loops seekhne hain:**  
`factorial.c` → `even_numbers.c` → `sum_even.c` → `multiplication_table.c` → `loop_sum.c`

---

## 02 — Patterns ⭐

**Folder:** `02-patterns/`

Yahan screen par stars/numbers ke patterns banane ke liye **nested loops** practice ki hain.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `increasing_for.c` | Increasing pattern banata hai | Nested `for` loops |
| `increasing_while.c` | Increasing pattern banata hai | Nested `while` loops |
| `increasing_do.c` | Increasing pattern banata hai | Nested `do-while` loops |
| `decreasing.c` | Decreasing pattern banata hai | Nested loops + reverse logic |
| `square.c` | Square/star pattern banata hai | Rows + columns |

**Main concept:** row/column thinking + nested loops.

---

# 03 — Arrays 📦

**Folder:** `03-arrays/`

Arrays ko do parts mein divide kiya gaya hai:

- `03-arrays/1d/` → normal one-dimensional arrays
- `03-arrays/2d/` → matrix/grid/two-dimensional arrays

---

## 03.1 — 1D Arrays

**Folder:** `03-arrays/1d/`

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `input.c` | User se array values leti hai | Array input |
| `traverse.c` | Array ke elements one-by-one show karta hai | Traversal |
| `sum.c` | Array ka total nikalta hai | Loop + array |
| `max.c` | Largest element find karta hai | Comparison |
| `min.c` | Smallest element find karta hai | Comparison |
| `average.c` | Array ka average calculate karta hai | Sum + type casting |
| `sizeof.c` | Array ki length calculate karta hai | `sizeof` operator |
| `search.c` | Target value ko array mein search karta hai | Linear search |
| `second_largest.c` | Second largest distinct value find karta hai | Comparison logic |
| `reverse.c` | Array ko reverse karta hai | Indexing + swapping |
| `reverse_steps.c` | Reverse operation ko step-by-step show karta hai | Debugging/thinking |
| `bubble_sort_steps.c` | Bubble sort ke passes show karta hai | Sorting + nested loops |

### 1D Array learning order

```text
input
  ↓
traverse
  ↓
sum
  ↓
max / min
  ↓
average
  ↓
sizeof
  ↓
search
  ↓
reverse
  ↓
second_largest
  ↓
bubble_sort
```

---

## 03.2 — 2D Arrays / Matrix

**Folder:** `03-arrays/2d/`

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `input.c` | 2D array mein values input leti hai | Matrix input |
| `grid_input.c` | 3×3 grid input aur display karta hai | Nested loops |
| `grid_3x3.c` | Fixed 3×3 grid ke saath practice | Rows + columns |
| `display.c` | 2D array display karta hai | Matrix traversal |
| `sum.c` | Matrix ke elements ka sum | Nested loops + accumulator |
| `max.c` | Matrix ka largest element | Comparison |
| `min.c` | Matrix ka smallest element | Comparison |
| `search.c` | Matrix mein target search karta hai | Nested search |
| `diagonal_sum.c` | Matrix diagonal ka sum | Row/column relationship |
| `transpose.c` | Matrix ka transpose banata hai | Matrix transformation |
| `grid_functions.c` | 2D array ko function mein pass karke display karta hai | Arrays + functions |
| `grid_input_functions.c` | Function se input aur display handle karta hai | 2D arrays + functions |

**2D array ka main idea:**

```text
row
 ↓
[ 1  2  3 ]
[ 4  5  6 ]
[ 7  8  9 ]
      →
    column
```

---

# 04 — Pointers 👉

**Folder:** `04-pointers/`

Pointers mein memory address aur dereferencing practice ki hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `basic.c` | Variable ka address aur pointer se value show karta hai | Address, `&`, `*` |
| `double.c` | Pointer ke through number ki value change karta hai | Dereferencing |
| `reverse.c` | Pointer ke through array reverse karta hai | Pointer + array |

### Pointer basics

```text
variable
   ↓
memory address
   ↓
pointer
   ↓
dereference (*pointer)
   ↓
original value
```

---

# 05 — Strings 🔤

**Folder:** `05-strings/`

C mein strings asal mein **character arrays** hoti hain. Yahan basic string input aur manipulation practice hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `input.c` | Basic string input handle karta hai | Character array + `fgets` |
| `reverse.c` | String ko reverse karta hai | String indexing + swapping |
| `name_city.c` | Name aur city input karke display karta hai | Multiple strings + `fgets` |

Important functions/operators:
- `fgets()`
- `strlen()`
- `strcspn()`
- Character arrays
- Null terminator `\\0`

---

# 06 — Swapping 🔄

**Folder:** `06-swap/`

Swapping ko separate rakha hai kyun ke ye pointers aur arrays samajhne mein important foundation hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `basic.c` | Do variables ki values swap karta hai | Variables + pointers |
| `array.c` | Array elements ko swap karke reverse karta hai | Array + swapping |

**Core idea:**

```text
a → temporary
b → a
temporary → b
```

---

# 07 — Functions 🧩

**Folder:** `07-functions/`

Ye section ab start ho chuka hai. Yahan code ko reusable functions mein divide karna practice kiya hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `cube.c` | Number ka cube function se return karta hai | Parameters + return value |
| `table.c` | Function se multiplication table print karta hai | `void` function + parameter |
| `global_scope.c` | Global variable ko different functions mein use karta hai | Scope |
| `number_guess.c` | Guess ko actual number se compare karta hai | Helper function + conditions |

### Function basics

```text
main()
  ↓
function call
  ↓
parameters
  ↓
function logic
  ↓
return value / output
```

---

# 🎯 Agar Mujhe Specific Cheez Seekhni Ho To?

| Mujhe seekhna hai | Yahan jao |
|---|---|
| `for` loop | `01-loops/` |
| `while` loop | `01-loops/factorial.c` |
| `do-while` | `01-loops/loop_sum.c` |
| Conditions + loops | `01-loops/even_numbers.c` |
| Nested loops | `02-patterns/` |
| Basic array | `03-arrays/1d/input.c` |
| Array traversal | `03-arrays/1d/traverse.c` |
| Array sum | `03-arrays/1d/sum.c` |
| Max / Min | `03-arrays/1d/max.c`, `min.c` |
| Search | `03-arrays/1d/search.c` |
| Reverse array | `03-arrays/1d/reverse.c` |
| Sorting | `03-arrays/1d/bubble_sort_steps.c` |
| 2D array | `03-arrays/2d/` |
| Matrix transpose | `03-arrays/2d/transpose.c` |
| Matrix diagonal | `03-arrays/2d/diagonal_sum.c` |
| Pointer basics | `04-pointers/basic.c` |
| Pointer se value change | `04-pointers/double.c` |
| Pointer + array | `04-pointers/reverse.c` |
| String input | `05-strings/input.c` |
| String reverse | `05-strings/reverse.c` |
| Swapping | `06-swap/` |
| Functions | `07-functions/` |
| Return value | `07-functions/cube.c` |
| Void function | `07-functions/table.c` |
| Scope | `07-functions/global_scope.c` |
| Helper function | `07-functions/number_guess.c` |

---

# ▶️ How to Run Any Program

Har `.c` file independent practice program hai.

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

Bas path aur output filename change karke kisi bhi program ko run kar sakte ho.

---

# 🧠 Learning Path

Agar C ko step-by-step seekhna ho to is repo ko roughly is order mein follow karo:

```text
Loops
  ↓
Patterns
  ↓
1D Arrays
  ↓
2D Arrays
  ↓
Swapping
  ↓
Pointers
  ↓
Strings
  ↓
Functions
  ↓
Recursion
  ↓
Structures
  ↓
Dynamic Memory
  ↓
File Handling
  ↓
Small C Projects
```

---

# 📝 My Learning Style

Mera approach simple hai:

```text
Learn
  ↓
Write Code
  ↓
Run It
  ↓
Understand
  ↓
Make Mistakes
  ↓
Fix Them
  ↓
Practice Again
  ↓
Move Forward
```

Ye **production-level software repository nahi** hai. Ye meri learning history hai — is liye simple programs, experiments aur mistakes bhi learning ka part hain.

---

# 🧹 Repository Rules

- Short aur meaningful filenames.
- Har program ko relevant topic folder mein rakhna.
- Important logic par Roman Urdu comments.
- Duplicate/junk files avoid karna.
- `.exe`, `.out`, `.o` aur temporary editor files commit nahi karni.
- Naya concept aaye to proper numbered folder banana.
- Code simple aur beginner-friendly rakhna.

---

# 🚀 What's Next?

Current next topics:

- More Functions
- Recursion
- Structures
- Unions
- Dynamic Memory Allocation
- File Handling
- More Pointer Practice
- More Array & String Problems
- Small C Projects

> **Small programs today → strong C fundamentals tomorrow.** 💻🔥
