# Lab 06 — Nested `if`, `else-if` Ladders & Multi-Condition Logic

## What this lab is about
This lab covers menu-like arithmetic decisions, salary slabs, character classification, last-digit checks, marks classification, electricity billing, quadratic roots, triangle classification, second-largest logic, and RGB-to-CMYK conversion. fileciteturn0file0L151-L183

## Nested `if`
A nested `if` is a decision inside another decision:
```c
if (condition1)
{
    if (condition2)
    {
        // ...
    }
}
```

## `else-if` ladder
Best when one input belongs to exactly one range:
```c
if (condition1)
    ...
else if (condition2)
    ...
else
    ...
```

### Ordering matters
For salary slabs such as `>= 10000`, `>= 20000`, `>= 30000`, checking the largest threshold first is often necessary if the conditions are intended to be mutually exclusive.

## Tricky boundary example
```c
int marks = 70;

if (marks < 35)
    printf("Fail");
else if (marks <= 45)
    printf("Pass Class");
else if (marks <= 60)
    printf("Second Class");
else if (marks <= 70)
    printf("First Class");
else
    printf("Distinction");
```
**Output**
```text
First Class
```

The manual's wording should be followed carefully when deciding whether a boundary such as 35/36 or 45/46 is inclusive.

## Quadratic equations
Understand the discriminant:
```text
D = b² - 4ac
```
- `D > 0`: two distinct real roots
- `D = 0`: repeated real root
- `D < 0`: no real roots

Also consider `a == 0`: then it is not a quadratic equation.

## RGB → CMYK concept
The manual gives normalization to `[0,1]`, maximum/white calculation, CMY calculation, and a special all-zero case.

## Practice focus
Always test:
- minimum boundary
- maximum boundary
- just below boundary
- just above boundary

---

## Study rule for this lab
The practical manual is the authority for the exact task wording. These notes intentionally explain concepts, syntax, traps, and small illustrative examples rather than reproducing complete solutions for every listed practical.
