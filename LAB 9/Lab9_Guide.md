# Lab 9 - Advanced Problem Solving with `while` Loops

## What this lab is about

This lab expands your use of `while` loops to handle complex series, arithmetic operations, digit extractions, and data conversions. You will practice implementing algorithms for:

- Alternating mathematical series and running totals
- Powers, factorials, and numeric factors without using built-in library functions
- Character manipulation using ASCII integer ranges
- Streamlined decimal-to-Roman numeral translation
- Positional digit extraction for number-to-word conversions
- Decimal-to-binary conversion
- Code tracing and recognizing unexecuted loop blocks

---

## 1. Alternating Series

For an alternating series where arithmetic signs switch per term:

```text
1 - 2 + 3 - 4 + 5 - 6 + ... + n
```

Odd terms are added and even terms are subtracted. Use the remainder operator (`%`) to determine the parity of the current term before modifying the running sum:

```c
if (number % 2 == 0)
    sum -= number;
else
    sum += number;
```

*Note: Remember to initialize your accumulator variables (`sum`) to zero prior to entering the loop.*

---

## 2. Multiplication Tables

Generating a sequential multiplication table requires an iterative loop counter running from 1 through 10. Each pass scales a static user input by the sliding multiplier value:

```c
int multiplier = 1;

while (multiplier <= 10)
{
    printf("%d x %d = %d\n", number, multiplier, number * multiplier);
    multiplier++;
}
```

---

## 3. Calculating Powers Without `pow()`

To compute the exponential value \(x^y\) without calling `<math.h>`, initialize a base scale factor at 1 and multiply it by base \(x\) precisely \(y\) times:

```c
double result = 1.0;
int count = 0;

while (count < exponent)
{
    result *= base;
    count++;
}
```

*Note: Your project file `A_3.c` includes extension logic to calculate reciprocals for inputs with negative exponents.*

---

## 4. Factorial Computations

The factorial of a non-negative integer \(n\) is defined as the product of all positive integers less than or equal to \(n\):

n! = 1 * 2 * 3 * ..... * n = (n) * (n-1) * (n-2) * (n-3) * .... * 1

Initialize your accumulator to 1. Inputs of 0 naturally evaluate to 1 because the loop conditional criteria safely bypasses multiplication passes:

```c
int factorial = 1;
int count = 1;

while (count <= number)
{
    factorial *= count;
    count++;
}
```

---

## 5. Isolating Numeric Factors

A mathematical factor divides an integer cleanly without leaving a remainder (R = 0). To evaluate factors, bound a searching loop counter from 1 directly through the magnitude of the targeted integer:

```c
int divisor = 1;

while (divisor <= number)
{
    if (number % divisor == 0)
        printf("%d ", divisor);
    divisor++;
}
```

---

## 6. Iterating Alphabetic Ranges

Characters in C are evaluated and scaled as their corresponding integer ASCII values. This contiguous layout allows you to loop directly across the uppercase range (`'A'` through `'Z'`) and lowercase range (`'a'` through `'z'`):

```c
char letter = 'A';

while (letter <= 'Z')
{
    printf("%c ", letter);
    letter++;
}
```

---

## 7. Decimal Numbers and Roman Digits

Instead of chaining multiple, nested `while` loops for separate place values (thousands, hundreds, tens, ones), this lab utilizes a single `while` loop that acts like a smart **currency change machine**. Given a value, it evaluates and extracts the **largest possible amounts first** to convert the total efficiently.

### The Golden Rule of Roman Math
In Roman numerals, you can **never repeat the same letter 4 times in a row** (e.g., you cannot write `IIII` for 4, or `XXXX` for 40). Because of this rule, the numbers **4 and 9 act as "breaking points"** where the spelling of the numeral transitions to a subtractive form (`IV` and `IX`).

### Quick Reference

| Ones | Tens | Hundreds | Thousands |
| :--- | :--- | :--- | :--- |
| `1 = I` | `10 = X` | `100 = C` | `1000 = M` |
| `2 = II` | `20 = XX` | `200 = CC` | `2000 = MM` |
| `3 = III` | `30 = XXX` | `300 = CCC` | `3000 = MMM` |
| `4 = IV` | `40 = XL` | `400 = CD` | |
| `5 = V` | `50 = L` | `500 = D` | |
| `6 = VI` | `60 = LX` | `600 = DC` | |
| `7 = VII` | `70 = LXX` | `700 = DCC` | |
| `8 = VIII` | `80 = LXXX` | `800 = DCCC` | |
| `9 = IX` | `90 = XC` | `900 = CM` | |

The standard range ends at `3999 = MMMCMXCIX`. The conversion uses only the start values (`I`, `X`, `C`, `M`), middle values (`V`, `L`, `D`), and breaking-point values (`IV`, `IX`, `XL`, `XC`, `CD`, `CM`).

### The Conversion Checklist
We only need to evaluate conditions for **starting bases, middle anchors, and breaking points**. The single loop tests inputs down this exact hierarchy:

*   **Thousands:** `1000` (M)
*   **Hundreds:** `900` (CM), `500` (D), `400` (CD), `100` (C)
*   **Tens:** `90` (XC), `50` (L), `40` (XL), `10` (X)
*   **Ones:** `9` (IX), `5` (V), `4` (IV), `1` (I)

Values like 800 or 70 are built automatically by repeating existing building blocks (`80 = 50 + 10 + 10 + 10`, producing `LXXX`).

### Algorithm Trace (Example Value: 80)
1. **Pass 1:** Value cascades past large elements, matches `50` (\(80 >= 50\)). Prints **L**, subtracts 50. New total = **30**. Loop resets to top.
2. **Pass 2:** Value hits `10` (\(30 >= 10\)). Prints **X**, subtracts 10. New total = **20**. Loop resets to top.
3. **Pass 3:** Value hits `10` (\(20 >= 10\)). Prints **X**, subtracts 10. New total = **10**. Loop resets to top.
4. **Pass 4:** Value hits `10` (\(10 >= 10\)). Prints **X**, subtracts 10. New total = **0**. Loop resets to top.
5. **Termination:** Total is `0`. The expression `while (number > 0)` becomes false; loop exits cleanly. Output: `LXXX`.

---

## 8. Converting Digits into Words

`C_1.c` translates each digit independently, rather than reading the whole number as a spoken quantity. It handles zero and a negative sign, finds the highest place value with `while (num / div >= 10)`, and then extracts digits from left to right using integer division and `%`.

The implementation accepts ordinary signed `int` values and prints the digit names separated by spaces.

Example execution on `3456` prints:
```text
Three Four Five Six
```

---

## 9. Converting Decimal to Binary

`C_2.c` repeatedly divides the decimal input by 2. Each remainder is a binary digit, and the digits are stored in a normal decimal `int` using place values `1`, `10`, `100`, and so on. For that reason, the program accepts only `0` through `1023`; larger values would overflow the encoded decimal representation even though their actual binary values are valid.

```text
remainder = number % 2;
binary = binary + remainder * placevalue;
placevalue = placevalue * 10;
number = number / 2;
```

*Note: The binary representation of decimal 11 is `1011` (not `1101` as noted in external reference sets).*

---

## 10. Code Diagnostics and Tracing

### Trace 1: Value Progression
```c
int a = 25;

while (a <= 27)
{
    printf("%d ", a);
    a++;
}
```
**Output:** `25 26 27`

### Trace 2: Unexecuted Loop Blocks
```c
while (0)
{
    // Statements
}
```
**Output:** *None*. Since `0` maps strictly to logical False in C execution environments, the loop condition fails instantly and skips the scope body entirely.

---

## Lab 9 File Registry

| Target File | Exercise Description |
| :--- | :--- |
| `A_1.c` | Alternating series sum evaluation |
| `A_2.c` | Generated multiplication tables |
| `A_3.c` | Exponential powers without standard helper libraries |
| `A_4.c` | Non-negative integer factorials |
| `A_5.c` | Factor tracking and isolation routines |
| `B_1.c` | Uppercase and lowercase alphabetic loops |
| `B_2.c` | Optimized Single-Loop Decimal-to-Roman numeral parsing |
| `C_1.c` | Positional digit extraction for string translations |
| `C_2.c` | Decimal-to-binary conversion |
| `C_3.c` | Diagnostic outputs for trace tracking problems |
