# C Programming Learning Notes

Ye repository meri **C programming learning journey** ko track karne ke liye hai.

Is repo mein chhote chhote programs hain jo C ke basic concepts ko practice karne ke liye banaye gaye hain. Code simple rakha gaya hai aur important jagahon par **Roman Urdu comments** diye gaye hain taake baad mein mujhe khud samajhne mein asani ho.

## Topics

- `for`, `while`, `do-while` loops
- Star patterns
- 1D arrays
- 2D arrays / grids
- Array sum, min, max aur reverse
- Pointers aur pointer arithmetic
- Swapping
- Strings, `fgets()`, `strlen()` aur `strcspn()`
- Grid search, diagonal sum aur transpose
- Factorial

## Naming

Pehle kuch files ke naam `1.c`, `p1.c`, `bhai.c` aur `Test1.c` jaise the. Ab filenames ko actual concept ke mutabiq meaningful rakha gaya hai, taake future mein file ka naam dekh kar hi topic samajh aa jaye.

## Run karna

Har `.c` file ek independent practice program hai.

```bash
gcc array_sum.c -o array_sum
./array_sum
```

Windows par:

```bash
gcc array_sum.c -o array_sum.exe
array_sum.exe
```

## Repository Cleanliness

Compiled `.exe` files source code nahi hotin, is liye unhein repository mein track nahi kiya jata. `.gitignore` generated files ko ignore karta hai.

## Learning Rule

Is repo ka goal production application banana nahi, balki concepts ko **likhna, run karna, samajhna aur dobara practice karna** hai.
