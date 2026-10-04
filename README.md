# C Programming Learning Notes

Ye repository meri **C programming learning journey** ko track karne ke liye hai.

Maine programs ko topic-wise folders mein organize kiya hai taake repo dekhte hi samajh aaye ke kis concept ki practice kahan hai. Code beginner-friendly rakha gaya hai aur important jagahon par **Roman Urdu comments** diye gaye hain.

## 📁 Folder Structure

```text
C/
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

## Topics

- `for`, `while`, `do-while` loops
- Star patterns
- 1D arrays
- 2D arrays / grids
- Array input, traversal, sum, min, max aur reverse
- Pointers aur pointer arithmetic
- Swapping
- Basic strings aur input handling
- Factorial
- Grid search, diagonal sum aur transpose

## Run Karna

Har `.c` file ek independent practice program hai.

Linux / macOS:

```bash
gcc 03-arrays/1d/array_sum.c -o array_sum
./array_sum
```

Windows:

```bash
gcc 03-arrays/1d/array_sum.c -o array_sum.exe
array_sum.exe
```

## Repository Cleanliness

- Compiled `.exe`, `.out` aur object files repository mein track nahi hotin.
- Temporary editor files bhi ignore ki jati hain.
- Filenames ko actual concept ke mutabiq meaningful rakha gaya hai.
- Related programs ko topic-wise folders mein rakha gaya hai.

## Learning Rule

Is repo ka goal production application banana nahi, balki concepts ko **likhna, run karna, samajhna aur dobara practice karna** hai.

Har naya C program add karte waqt usay relevant topic folder mein rakhna hai aur filename aisa rakhna hai jo code ka purpose clearly bataye.
