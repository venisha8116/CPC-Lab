# C Programming — Nested `for` Loop Pattern Logic

## 1. Basic Idea of Pattern Programs

Most pattern programs in C use **nested `for` loops**.

The general structure is:

```c
for (i = 1; i <= n; i++)
{
    for (j = 1; j <= something; j++)
    {
        printf(...);
    }
    printf("\n");
}
```

The easiest way to understand this is:

* `i` → **row number**

* `j` → **position/item inside the row**

### Golden Rule

> **Outer loop = Rows**

> **Inner loop = Columns / Items in a row**

---

# 2. How to Crack Any Pattern

When you get a new pattern, don't try to memorize the program.

Follow these steps.

## Step 1 — Count the rows

Ask:

> How many rows does the pattern have?

Usually:

```c
for (i = 1; i <= n; i++)
```

For example:

```text
*
**
***
****
*****
```

There are `n = 5` rows.

---

## Step 2 — Find how many things are printed in each row

Look at the number of symbols/numbers in each row.

Example:

```text
*
**
***
****
*****
```

Number of items:

```text
1
2
3
4
5
```

So the number of items in row `i` is:

```text
items = i
```

Therefore:

```c
for (j = 1; j <= i; j++)
```

---

## Step 3 — Find WHAT is printed

After determining how many times the inner loop runs, determine what should be printed.

For example:

```text
1
12
123
1234
```

The values are controlled by `j`.

So:

```c
printf("%d", j);
```

---

## Step 4 — Check for spaces

If the pattern is aligned to the right or centered, spaces are usually required.

Example:

```text
   *
  **
 ***
****
```

There are spaces before the stars.

So we need a separate loop for spaces.

---

## Step 5 — Test with a small value

Always test your logic with:

```text
n = 5
```

and mentally check each value of `i`.

---

# 3. What `i` and `j` Actually Mean

Don't think of `i` and `j` simply as loop variables.

Think:

```text
i = row
j = position inside the row
```

For:

```text
123
```

we have:

```text
i = 3

j = 1 → print 1
j = 2 → print 2
j = 3 → print 3
```

Therefore:

```c
printf("%d", j);
```

---

# 4. Understanding Patterns

The easiest way to understand a pattern is to create a row-by-row table.

For:

```text
*
**
***
****
*****
```

we can write:

| Row (`i`) | Number of items |
| --------: | --------------: |
|         1 |               1 |
|         2 |               2 |
|         3 |               3 |
|         4 |               4 |
|         5 |               5 |

Therefore:

```text
Number of items = i
```

For:

```text
*****
****
***
**
*
```

the table becomes:

| Row (`i`) | Number of items |
| --------: | --------------: |
|         1 |               5 |
|         2 |               4 |
|         3 |               3 |
|         4 |               2 |
|         5 |               1 |

Therefore:

```text
Number of items = n - i + 1
```

This table method makes it much easier to discover the loop condition.

---

# 5. Understanding `j` Direction

The direction of `j` depends on the numbers or characters you want to print.

## Increasing `j`

If the output moves forward:

```text
1 2 3 4 5
```

then:

```text
j++
```

Example:

```text
12345
```

---

## Decreasing `j`

If the output moves backward:

```text
5 4 3 2 1
```

then:

```text
j--
```

Example:

```text
54321
```

---

## Important idea

Do not blindly write:

```c
j++
```

or:

```c
j--
```

First look at the output.

Ask:

> Is the value moving forward or backward?

Then decide the direction of `j`.

---

# 6. The "HOW MANY" vs "WHAT" Trick

This is one of the best ways to solve patterns.

For every pattern, ask two questions.

## Question 1: HOW MANY?

This determines the inner loop.

Example:

```text
*
**
***
****
```

Number of stars:

```text
1
2
3
4
```

Therefore:

```c
j <= i
```

---

## Question 2: WHAT?

This determines `printf()`.

For:

```text
1
12
123
1234
```

we print:

```c
printf("%d", j);
```

For:

```text
1
22
333
4444
```

we print:

```c
printf("%d", i);
```

For:

```text
*
**
***
```

we print:

```c
printf("*");
```

---

# 7. Simple Decision Process

When you see a pattern, think in this order:

```text
                    START
                      |
                      v
              How many rows?
                      |
                      v
                       n
                      |
                      v
           How many items per row?
                 /           \
                /             \
        Increasing          Decreasing
             |                   |
             v                   v
             i             n - i + 1
             |                   |
             +---------+---------+
                       |
                       v
                  What to print?
                 /      |       \
                /       |        \
               *        i         j
                \       |        /
                 \      |       /
                       v
                 Check spaces
                       |
                       v
                      DONE
```

---

# 8. General Pattern Template

For a simple increasing pattern:

```c
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
```

When solving a new pattern, usually only these parts change:

```c
for (j = 1; j <= i; j++)
```

and:

```c
printf(...);
```

---

# 9. Important Patterns

The following patterns are arranged from simpler to more difficult.

## 9.1 Increasing Number of Items

Consider:

```text
*
**
***
****
*****
```

Number of items:

```text
Row 1 → 1
Row 2 → 2
Row 3 → 3
Row 4 → 4
Row 5 → 5
```

Therefore:

```text
Number of items = i
```

---

## 9.2 Decreasing Number of Items

Consider:

```text
*****
****
***
**
*
```

Number of items:

```text
Row 1 → 5
Row 2 → 4
Row 3 → 3
Row 4 → 2
Row 5 → 1
```

Therefore:

```text
Number of items = n - i + 1
```

### Remember

```text
Increasing → i
Decreasing → n - i + 1
```

---

## 9.3 Star Pattern

Pattern:

```text
*
**
***
****
*****
```

Logic:

```text
Number of stars = i
```

---

## 9.4 Increasing Number Pattern

Pattern:

```text
1
12
123
1234
12345
```

Logic:

```text
Each row starts from 1
Numbers increase from left to right
Number of items increases row by row
```

### Why?

For each row:

```text
i = 1 → j = 1

i = 2 → j = 1,2

i = 3 → j = 1,2,3
```

So we print `j`.

---

## 9.5 Same Number in Each Row

Pattern:

```text
1
22
333
4444
55555
```

Here the number printed is the row number.

So:

```text
The same number is printed throughout the row.
```

### Important Difference

```text
i
```

prints the same number throughout the row.

```text
j
```

prints an increasing sequence within the row.

---

## 9.6 Decreasing Number Pattern

Pattern:

```text
5
54
543
5432
54321
```

For `n = 5`:

| Row `i` | Values of `j` |
| ------: | ------------- |
|       1 | 5             |
|       2 | 5, 4          |
|       3 | 5, 4, 3       |
|       4 | 5, 4, 3, 2    |
|       5 | 5, 4, 3, 2, 1 |

The inner loop is based on:

```text
j starts from n
j decreases
j stops at n - i + 1
```

---

## 9.7 Understanding `n - i + 1`

This formula is important for decreasing patterns.

Suppose:

```text
n = 5
```

Then:

| `i` | `n - i + 1` | Inner loop |
| --: | ----------: | ---------- |
|   1 |           5 | `5`        |
|   2 |           4 | `54`       |
|   3 |           3 | `543`      |
|   4 |           2 | `5432`     |
|   5 |           1 | `54321`    |

So:

```text
j = n
j >= n - i + 1
j--
```

creates:

```text
5
54
543
5432
54321
```

---

## 9.8 Spaces in Patterns

Spaces are treated as another type of output.

Consider:

```text
    *
   **
  ***
 ****
*****
```

The pattern may require a separate loop for spaces.

General structure:

```text
space loop + symbol loop
```

### Important Rule

> If different things need to be printed separately, give them separate loops.

For example:

```text
spaces + stars
```

means:

```text
space loop + star loop
```

---

## 9.9 Right-Aligned Increasing Pattern

Pattern:

```text
    *
   **
  ***
 ****
*****
```

Number of spaces:

```text
4
3
2
1
0
```

Formula:

```text
spaces = n - i
```

Number of stars:

```text
stars = i
```

---

## 9.10 Left-Aligned Decreasing Pattern

Pattern:

```text
*****
****
***
**
*
```

Number of stars:

```text
n - i + 1
```

---

## 9.11 Right-Aligned Decreasing Pattern

Pattern:

```text
*****
 ****
  ***
   **
    *
```

Number of spaces:

```text
i - 1
```

Number of stars:

```text
n - i + 1
```

---

# 10. Important Formulas

| Requirement                      | Formula / Logic   |
| -------------------------------- | ----------------- |
| Increasing number of items       | `i`               |
| Decreasing number of items       | `n - i + 1`       |
| Spaces before increasing pattern | `n - i`           |
| Spaces before decreasing pattern | `i - 1`           |
| Print row number                 | `i`               |
| Print column number              | `j`               |
| Increasing sequence              | `j++`             |
| Decreasing sequence              | `j--`             |
| Pyramid stars                    | `2 * i - 1`       |
| Inverted pyramid stars           | `2 * (n - i) + 1` |

---

# 11. Golden Rules to Memorize

> **1. Outer `for` loop controls rows.**

> **2. Inner `for` loop controls items/columns.**

> **3. `i` usually represents the row number.**

> **4. `j` usually represents the position inside the row.**

> **5. Increasing number of items → `i`.**

> **6. Decreasing number of items → `n - i + 1`.**

> **7. Increasing leading spaces → `n - i`.**

> **8. Increasing numbers → usually print `j`.**

> **9. Same number in a row → usually print `i`.**

> **10. If spaces and symbols are different, use separate loops.**

> **11. Don't memorize patterns; derive them row by row.**

> **12. When stuck, make an `i`/`j` table.**

---

# 12. Pattern Cheat Sheet

## Increasing triangle

```text
*
**
***
****
```

Use:

```text
j <= i
```

---

## Decreasing triangle

```text
****
***
**
*
```

Use:

```text
j <= n - i + 1
```

---

## Increasing numbers

```text
1
12
123
1234
```

Use:

```text
printf("%d", j);
```

---

## Same number per row

```text
1
22
333
4444
```

Use:

```text
printf("%d", i);
```

---

## Decreasing numbers

```text
5
54
543
5432
54321
```

Use:

```text
for (j = n; j >= n - i + 1; j--)
```

---

## Right-aligned increasing

```text
    *
   **
  ***
 ****
*****
```

Use:

```text
spaces = n - i
symbols = i
```

---

## Right-aligned decreasing

```text
*****
 ****
  ***
   **
    *
```

Use:

```text
spaces = i - 1
symbols = n - i + 1
```

---

# 13. The Most Important Formulas

Memorize these:

```text
Increasing items:

i

Decreasing items:

n - i + 1

Increasing leading spaces:

n - i

Decreasing leading spaces:

i - 1
```

These four formulas solve a large number of basic pattern questions.

---

# 14. Use a Table When You Are Stuck

Suppose the pattern is:

```text
1
12
123
1234
```

Create this table:

| Row `i` | `j` values | Output |
| ------: | ---------- | ------ |
|       1 | 1          | `1`    |
|       2 | 1, 2       | `12`   |
|       3 | 1, 2, 3    | `123`  |
|       4 | 1, 2, 3, 4 | `1234` |

Now it is obvious:

```text
j starts at 1
j ends at i
j increases
```

Therefore:

```c
for (j = 1; j <= i; j++)
```

and:

```c
printf("%d", j);
```

---

# 15. Common `j` Starting Points

Don't assume `j` always starts at `1`.

## Increasing sequence

```text
12345
```

Use:

```c
for (j = 1; j <= n; j++)
```

---

## Decreasing sequence

```text
54321
```

Use:

```c
for (j = n; j >= 1; j--)
```

---

## Start from the row number

For:

```text
1
21
321
4321
```

you might use:

```c
for (j = i; j >= 1; j--)
```

The starting value and direction of `j` determine the sequence.

---

# 16. Exam Strategy

When you get a pattern question in an exam:

### Don't immediately start coding.

First write:

```text
Rows = n
```

Then determine:

```text
Items = ?
```

Then determine:

```text
Printed value = ?
```

Then determine:

```text
Spaces = ?
```

Only after that write the nested loops.

---

# 17. Final Mental Model

Remember these four things:

```text
i → ROW

j → POSITION

HOW MANY → inner for loop

WHAT → printf()

WHERE → spaces
```

For example:

```text
1
22
333
4444
```

Think:

```text
Rows → i

How many?

1, 2, 3, 4

→ i

What?

Same number in each row

→ i
```

Therefore:

```text
for (i = 1; i <= n; i++)
{
    for (j = 1; j <= i; j++)
    {
        printf("%d", i);
    }

    printf("\n");
}
```

---

# 18. Quick Revision Table

| Pattern                | Inner Loop                  | `printf()` |
| ---------------------- | --------------------------- | ---------- |
| `*`, `**`, `***`       | `j <= i`                    | `"*"`      |
| `1`, `12`, `123`       | `j <= i`                    | `j`        |
| `1`, `22`, `333`       | `j <= i`                    | `i`        |
| `*****`, `****`, `***` | `j <= n-i+1`                | `"*"`      |
| `54321`                | `j = n; j >= 1; j--`        | `j`        |
| Right increasing       | spaces `n-i`, items `i`     | `"*"`      |
| Right decreasing       | spaces `i-1`, items `n-i+1` | `"*"`      |

---

## One-line formula sheet

```text
Rows              → i = 1 to n

Increasing items  → i

Decreasing items  → n - i + 1

Leading spaces    → n - i

Trailing shift    → i - 1

Row value         → i

Column value      → j

Increasing j      → j++

Decreasing j      → j--

New row           → printf("\n");
```

**Core idea:** Don't memorize the code. **Look at one row, find the number of items, find what changes, and convert those observations into `i` and `j`.**
