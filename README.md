# C Programming 🧠

> **Meri C programming learning journey — code, concepts, mistakes, revision aur progress.**

Ye repository meri **C programming practice ka organized learning tracker** hai.

Is repo ka purpose sirf code store karna nahi hai. Har folder aur har `.c` file ko is tarah arrange kiya gaya hai ke future mein main ya koi aur repo open kare to **turant samajh aaye ke kya seekha hai, kis concept ki practice kahan hai, aur revision ke liye kis file par jana hai.**

---

# 🧭 Quick Navigation

| Agar mujhe... | Yahan jana hai |
|---|---|
| Loops revise karne hain | `01-loops/` |
| Nested loops / patterns revise karne hain | `02-patterns/` |
| 1D arrays revise karne hain | `03-arrays/1d/` |
| 2D arrays / matrices revise karni hain | `03-arrays/2d/` |
| Pointers revise karne hain | `04-pointers/` |
| Strings revise karni hain | `05-strings/` |
| Swapping revise karni hai | `06-swap/` |
| Functions revise karne hain | `07-functions/` |
| C ka complete learning order dekhna hai | [Learning Path](#-learning-path) |
| Kisi specific concept ki file dhoondni hai | [Revision Map](#-revision-map) |
| Puri repo ki structure dekhni hai | [Complete Repository Tree](#-complete-repository-tree) |

---

# 🗺️ Complete Learning Map

| # | Folder | Main Focus | Status |
|---|---|---|---|
| 01 | `01-loops` | `for`, `while`, `do-while`, conditions, calculations | 🟢 Practiced |
| 02 | `02-patterns` | Nested loops, rows, columns, patterns | 🟢 Practiced |
| 03 | `03-arrays` | 1D arrays + 2D arrays / matrices | 🟢 Practiced |
| 04 | `04-pointers` | Addresses, dereference, pointer + array | 🟢 Practiced |
| 05 | `05-strings` | Character arrays, `fgets`, string manipulation | 🟢 Practiced |
| 06 | `06-swap` | Variable swapping, pointer-based swapping | 🟢 Practiced |
| 07 | `07-functions` | Parameters, return values, `void`, scope | 🟡 Started |
| 08 | `08-structures` | Structures / custom data | 🔜 Next |
| 09 | `09-file-handling` | Files, read/write | 🔜 Future |
| 10 | `10-dynamic-memory` | `malloc`, `calloc`, `realloc`, `free` | 🔜 Future |

**Legend:** 🟢 practiced · 🟡 currently learning · 🔜 future topic

---

# 📚 Topic-by-Topic Guide

## 01 — Loops 🔁

**Folder:** `01-loops/`

Yahan loops ko different situations mein use karna practice kiya gaya hai.

| File | Kya karti hai | Kis cheez ke liye |
|---|---|---|
| `factorial.c` | Number ka factorial calculate karti hai | `while` loop + multiplication |
| `odd_reverse.c` | Odd numbers ko reverse order mein print karti hai | Reverse loop + condition |
| `loop_sum.c` | Different loops se sums calculate karti hai | `for`, `while`, `do-while` |
| `even_numbers.c` | Range ke even numbers print karti hai | Loop + `if` + modulus |
| `sum_even.c` | Range ke even numbers ka total nikalti hai | Loop + accumulator |
| `multiplication_table.c` | Kisi number ki 1–10 table print karti hai | Loop + arithmetic |

### Revision order

```text
factorial
   ↓
odd_reverse
   ↓
even_numbers
   ↓
sum_even
   ↓
multiplication_table
   ↓
loop_sum
```

**Important concepts:** counter, condition, increment/decrement, accumulator, modulus, loop control.

---

## 02 — Patterns ⭐

**Folder:** `02-patterns/`

Ye section **nested loops** ko samajhne ke liye hai.

| File | Kya karti hai | Kis cheez ke liye |
|---|---|---|
| `increasing_for.c` | Increasing star pattern | Nested `for` |
| `increasing_while.c` | Increasing star pattern | Nested `while` |
| `increasing_do.c` | Increasing star pattern | Nested `do-while` |
| `decreasing.c` | Decreasing star pattern | Reverse nested loops |
| `square.c` | Square pattern | Rows + columns |

### Pattern sochne ka tareeqa

```text
Outer loop  = rows
Inner loop  = columns / items in current row

Row 1 → * 
Row 2 → * *
Row 3 → * * *
Row 4 → * * * *
```

**Revision tip:** Pehle `increasing_for.c` samjho, phir same logic ko `while` aur `do-while` mein compare karo.

---

# 03 — Arrays 📦

**Folder:** `03-arrays/`

Arrays ko do clear parts mein rakha gaya hai:

- `03-arrays/1d/` → One-dimensional arrays
- `03-arrays/2d/` → Two-dimensional arrays / matrices

---

## 03.1 — 1D Arrays

**Folder:** `03-arrays/1d/`

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `input.c` | User se array values leti hai | Array input |
| `traverse.c` | Elements one-by-one show karti hai | Traversal + indexing |
| `sum.c` | Array ka total nikalti hai | Loop + accumulator |
| `max.c` | Largest value find karti hai | Comparison |
| `min.c` | Smallest value find karti hai | Comparison |
| `average.c` | Average calculate karti hai | Sum + type casting |
| `sizeof.c` | Array ki length calculate karti hai | `sizeof` |
| `search.c` | Target value search karti hai | Linear search |
| `second_largest.c` | Second-largest distinct value find karti hai | Comparison logic |
| `reverse.c` | Array ko reverse order mein display karti hai | Reverse indexing |
| `reverse_steps.c` | Array ko swap karke reverse karti hai aur steps show karti hai | In-place swapping |
| `bubble_sort_steps.c` | Bubble sort ke passes show karti hai | Sorting + nested loops |

### 1D Array revision order

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
bubble_sort_steps
```

**Main concepts:** index, traversal, array length, comparison, searching, reversing, sorting.

---

## 03.2 — 2D Arrays / Matrix

**Folder:** `03-arrays/2d/`

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `input.c` | 3×3 grid input aur display karti hai | Matrix input |
| `grid_input.c` | 3×3 grid input + display ka focused example | Nested loops + input |
| `grid_3x3.c` | Fixed 3×3 grid display karti hai | Rows + columns |
| `display.c` | 2×3 matrix display karti hai | 2D traversal |
| `sum.c` | Matrix ke elements ka sum nikalti hai | Nested loops + accumulator |
| `max.c` | Matrix ki maximum value find karti hai | Comparison |
| `min.c` | Matrix ki minimum value find karti hai | Comparison |
| `search.c` | User ki target value matrix mein search karti hai | Nested search |
| `diagonal_sum.c` | Main diagonal ka sum nikalti hai | `row == column` |
| `transpose.c` | Matrix ka transpose display karti hai | Row/column swap |
| `grid_functions.c` | 2D array ko function mein pass karti hai | Arrays + functions |
| `grid_input_functions.c` | Functions se input aur display handle karti hai | 2D arrays + functions |

### 2D array mental model

```text
              column
          0     1     2
       ┌─────┬─────┬─────┐
row 0  │  1  │  2  │  3  │
       ├─────┼─────┼─────┤
row 1  │  4  │  5  │  6  │
       ├─────┼─────┼─────┤
row 2  │  7  │  8  │  9  │
       └─────┴─────┴─────┘
```

**Revision order:** `display.c` → `input.c` → `sum.c` → `max.c` / `min.c` → `search.c` → `diagonal_sum.c` → `transpose.c` → function-based files.

---

# 04 — Pointers 👉

**Folder:** `04-pointers/`

Pointers mein memory address, dereferencing aur arrays ke saath pointer use practice kiya gaya hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `basic.c` | Address aur pointer se value show/change karti hai | `&`, `*`, address |
| `double.c` | Pointer ke through number double karti hai | Dereferencing + function |
| `reverse.c` | Pointer arithmetic se array reverse karti hai | Pointer + array |

### Pointer mental model

```text
normal variable
      ↓
   value

   &variable
      ↓
 memory address
      ↓
   pointer
      ↓
 *pointer
      ↓
 original value
```

**Revision order:** `basic.c` → `double.c` → `reverse.c`.

---

# 05 — Strings 🔤

**Folder:** `05-strings/`

C mein string basically **characters ka array** hoti hai jo `\\0` null terminator par end hoti hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `input.c` | Naam input karti hai | Character array + `fgets` |
| `reverse.c` | String reverse karti hai | Indexing + `strlen` + swapping |
| `name_city.c` | Name aur city input karti hai | Multiple strings + `fgets` |

### Important string tools

- `char array[]`
- `fgets()`
- `strlen()`
- `strcspn()`
- Null terminator: `\\0`

**Revision order:** `input.c` → `name_city.c` → `reverse.c`.

---

# 06 — Swapping 🔄

**Folder:** `06-swap/`

Swapping ek important foundation hai jo arrays, pointers aur sorting mein baar-baar use hoti hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `basic.c` | Do variables ki values swap karti hai | Pointer parameters |
| `array.c` | Array ko pair-wise swapping se reverse karti hai | Array + swapping |

### Core logic

```text
temp = a
a = b
b = temp
```

**Revision tip:** `basic.c` ko pehle samjho, phir `array.c` aur uske baad `04-pointers/reverse.c` compare karo.

---

# 07 — Functions 🧩

**Folder:** `07-functions/`

Ye section functions ko reusable building blocks ki tarah samajhne ke liye hai.

| File | Kya karti hai | Kis concept ke liye |
|---|---|---|
| `cube.c` | Cube calculate karke value return karti hai | Parameter + return |
| `table.c` | Function se multiplication table print karti hai | `void` + parameter |
| `global_scope.c` | Global variable ko multiple functions mein use karti hai | Scope |
| `number_guess.c` | Guess ko actual number ke saath compare karti hai | Helper function + conditions |

### Function mental model

```text
main()
  ↓
function call
  ↓
arguments
  ↓
parameters
  ↓
function logic
  ↓
return value / output
```

**Revision order:** `cube.c` → `table.c` → `number_guess.c` → `global_scope.c`.

---

# 🎯 Revision Map — Mujhe Kya Seekhna / Revise Karna Ho?

| Concept | Start here | Phir ye dekho |
|---|---|---|
| `for` loop | `01-loops/multiplication_table.c` | `01-loops/loop_sum.c` |
| `while` loop | `01-loops/factorial.c` | `01-loops/loop_sum.c` |
| `do-while` | `01-loops/loop_sum.c` | `02-patterns/increasing_do.c` |
| Conditions + loops | `01-loops/even_numbers.c` | `01-loops/sum_even.c` |
| Reverse loop | `01-loops/odd_reverse.c` | `03-arrays/1d/reverse.c` |
| Nested loops | `02-patterns/increasing_for.c` | `02-patterns/square.c` |
| Array basics | `03-arrays/1d/input.c` | `traverse.c` |
| Array indexing | `03-arrays/1d/traverse.c` | `reverse.c` |
| Array sum | `03-arrays/1d/sum.c` | `03-arrays/2d/sum.c` |
| Max / Min | `03-arrays/1d/max.c` | `03-arrays/2d/max.c` |
| Array length | `03-arrays/1d/sizeof.c` | — |
| Average | `03-arrays/1d/average.c` | — |
| Linear search | `03-arrays/1d/search.c` | `03-arrays/2d/search.c` |
| Reverse array | `03-arrays/1d/reverse_steps.c` | `04-pointers/reverse.c` |
| Second largest | `03-arrays/1d/second_largest.c` | — |
| Bubble sort | `03-arrays/1d/bubble_sort_steps.c` | — |
| 2D arrays | `03-arrays/2d/display.c` | `input.c` |
| Matrix diagonal | `03-arrays/2d/diagonal_sum.c` | — |
| Matrix transpose | `03-arrays/2d/transpose.c` | — |
| Pointer basics | `04-pointers/basic.c` | `double.c` |
| Pointer + function | `04-pointers/double.c` | `06-swap/basic.c` |
| Pointer + array | `04-pointers/reverse.c` | — |
| String input | `05-strings/input.c` | `name_city.c` |
| String reverse | `05-strings/reverse.c` | — |
| Swapping | `06-swap/basic.c` | `06-swap/array.c` |
| Return value | `07-functions/cube.c` | — |
| `void` function | `07-functions/table.c` | `number_guess.c` |
| Scope | `07-functions/global_scope.c` | — |
| Helper function | `07-functions/number_guess.c` | — |

---

# ▶️ How to Run Any Program

Har `.c` file mostly **independent practice program** hai. Is liye jis concept ko run karna ho, us file ka path use karo.

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

### General formula

```text
gcc path/to/file.c -o output_name
```

Phir output program run karo.

> Agar `gcc` command nahi chal rahi, pehle GCC/compiler setup karna hoga.

---

# 🧠 Learning Path

C ko step-by-step seekhne ke liye repo ka recommended order:

```text
Basics
  ↓
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
Unions
  ↓
Dynamic Memory
  ↓
File Handling
  ↓
Data Structures
  ↓
Small C Projects
```

**Rule:** Agla topic sirf tab move karo jab previous topic ke basic programs ko khud explain aur modify kar sako.

---

# 🌳 Complete Repository Tree

> **Ye current repo ka exact learning structure hai.** Kisi bhi file ko revise karna ho to yahin se uska location instantly mil jayega.

```text
C.
├── .gitignore
├── README.md
│
├── 01-loops/
│   ├── even_numbers.c
│   ├── factorial.c
│   ├── loop_sum.c
│   ├── multiplication_table.c
│   ├── odd_reverse.c
│   └── sum_even.c
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
│   │   ├── average.c
│   │   ├── bubble_sort_steps.c
│   │   ├── input.c
│   │   ├── max.c
│   │   ├── min.c
│   │   ├── reverse.c
│   │   ├── reverse_steps.c
│   │   ├── search.c
│   │   ├── second_largest.c
│   │   ├── sizeof.c
│   │   ├── sum.c
│   │   └── traverse.c
│   │
│   └── 2d/
│       ├── diagonal_sum.c
│       ├── display.c
│       ├── grid_3x3.c
│       ├── grid_functions.c
│       ├── grid_input.c
│       ├── grid_input_functions.c
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
│   ├── input.c
│   ├── name_city.c
│   └── reverse.c
│
├── 06-swap/
│   ├── array.c
│   └── basic.c
│
└── 07-functions/
    ├── cube.c
    ├── global_scope.c
    ├── number_guess.c
    └── table.c
```

### Folder ka matlab ek line mein

```text
01-loops      → loops
02-patterns   → nested loops / patterns
03-arrays     → 1D + 2D arrays
04-pointers   → memory addresses + dereference
05-strings    → character arrays + strings
06-swap       → swapping techniques
07-functions  → reusable functions
```

---

# 📝 My Learning Style

Mera learning approach simple hai:

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
Change the Code
  ↓
Practice Again
  ↓
Revise
  ↓
Move Forward
```

### Revision ka best tareeqa

Agar koi topic bhool jao:

```text
1. README mein concept search karo
        ↓
2. Revision Map se starting file dekho
        ↓
3. File ka code khud explain karo
        ↓
4. Program run karo
        ↓
5. Values / logic change karo
        ↓
6. Apna small variation banao
        ↓
7. Phir next file par jao
```

**Sirf code read nahi karna — code ko change bhi karna hai.**

---

# 🧹 Repository Rules

Repo ko clean aur useful rakhne ke liye:

- Short aur meaningful filenames use karna.
- Har program ko relevant numbered topic folder mein rakhna.
- Important logic par beginner-friendly Roman Urdu comments rakhna.
- Duplicate, junk aur editor-generated files avoid karna.
- `.exe`, `.out`, `.o` aur temporary files commit nahi karni.
- Ek concept ke multiple versions hon to unka purpose clear hona chahiye.
- Code ko unnecessarily complicated nahi banana.
- New topic aaye to numbered folder structure maintain karna.
- README ko new topics/files ke saath update karna.
- Learning repo hai, is liye experiments aur mistakes ko learning ka part samajhna.

---

# 🚀 What's Next?

Current roadmap:

- More Functions
- Recursion
- Structures
- Unions
- More Pointer Practice
- More Array Problems
- More String Problems
- Dynamic Memory Allocation
- File Handling
- Data Structures
- Small C Projects

> **Small programs today → strong C fundamentals tomorrow.** 💻🔥
