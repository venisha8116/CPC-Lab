# C Lab – Decision Making: Switch Case & Conditional Operator

## Topics Covered

1. `switch...case`
2. `break`
3. `default`
4. Conditional (Ternary) Operator `?:`
5. Basic decision-making programs

---

# 1. switch...case

## Syntax

```c
switch(expression)
{
    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    default:
        // statements
}
```

## How it works

- The `expression` is evaluated.
- Its value is compared with each `case`.
- When a matching `case` is found, its statements are executed.
- `break` exits the switch.
- If no case matches, `default` is executed.

## Example

```c
int day;

scanf("%d", &day);

switch(day)
{
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    default:
        printf("Invalid day");
}
```

## Basic Logic

For a question like:

> Print day name according to day number.

Think:

```text
Input day number
        ↓
Check day number
        ↓
1 → Monday
2 → Tuesday
3 → Wednesday
...
7 → Sunday
        ↓
Invalid → Invalid day number
```

---

# 2. break in switch

## Syntax

```c
case value:
    statements;
    break;
```

## Purpose

`break` stops the execution of the current switch statement.

Example:

```c
switch(choice)
{
    case 1:
        printf("One");
        break;

    case 2:
        printf("Two");
        break;
}
```

If `choice` is `1`, only `One` is printed.

## What happens without break?

```c
switch(choice)
{
    case 1:
        printf("One");

    case 2:
        printf("Two");
}
```

If `choice` is `1`, both `One` and `Two` may be printed because execution continues into the next case.

### Common Mistake

Forgetting `break` after a case.

---

# 3. default in switch

## Syntax

```c
default:
    statements;
```

## Purpose

`default` runs when none of the cases match.

Example:

```c
switch(day)
{
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    default:
        printf("Invalid day");
}
```

If the user enters `10`, no case matches, so `default` executes.

---

# 4. Multiple Cases with Same Output

Cases can be grouped when multiple values have the same result.

Example:

```c
switch(month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;

    case 2:
        printf("28 or 29 days");
        break;
}
```

## Logic

```text
1, 3, 5, 7, 8, 10, 12 → 31 days

4, 6, 9, 11 → 30 days

2 → 28 or 29 days
```

There is no statement between the grouped cases because all of them should execute the same statement.

---

# 5. switch with Character Choices

`switch` can also be used with characters.

Example:

```c
char choice;

scanf(" %c", &choice);

switch(choice)
{
    case '+':
        printf("Addition");
        break;

    case '-':
        printf("Subtraction");
        break;

    case '*':
        printf("Multiplication");
        break;

    case '/':
        printf("Division");
        break;

    default:
        printf("Invalid choice");
}
```

## Important

Use:

```c
scanf(" %c", &choice);
```

Notice the space before `%c`.

The space helps `scanf` ignore leftover whitespace/newline characters.

---

# 6. Arithmetic Operations Using switch

## Basic Logic

```text
Read two numbers
        ↓
Read user's operation
        ↓
       switch
      /   |   |   \
     +    -   *    /
     ↓    ↓   ↓    ↓
   Add  Sub Mul  Divide
```

## Example

```c
switch(choice)
{
    case '+':
        printf("%.2f", num1 + num2);
        break;

    case '-':
        printf("%.2f", num1 - num2);
        break;

    case '*':
        printf("%.2f", num1 * num2);
        break;

    case '/':
        printf("%.2f", num1 / num2);
        break;

    default:
        printf("Invalid choice");
}
```

---

# 7. Division by Zero

Never divide by zero.

Incorrect:

```c
printf("%f", num1 / num2);
```

If `num2` can be zero, check it first.

```c
if(num2 != 0)
{
    printf("%.2f", num1 / num2);
}
else
{
    printf("Division by zero is not possible");
}
```

---

# 8. Conditional Operator

The conditional operator is also called the ternary operator.

## Syntax

```c
condition ? expression1 : expression2;
```

Meaning:

```text
If condition is true
    → expression1

Otherwise
    → expression2
```

## Example

```c
int result;

result = (a > b) ? a : b;
```

Meaning:

```text
Is a greater than b?
        ↓
     Yes → result = a
     No  → result = b
```

---

# 9. Even or Odd Using Conditional Operator

## Logic

A number is even when its remainder after division by 2 is `0`.

```c
num % 2 == 0
```

## Program Logic

```text
Read number
    ↓
num % 2 == 0 ?
   /       \
 Yes       No
  ↓         ↓
Even       Odd
```

## Example

```c
(num % 2 == 0)
    ? printf("Even number")
    : printf("Odd number");
```

---

# 10. Largest of Two Numbers Using Conditional Operator

## Logic

```c
largest = (a > b) ? a : b;
```

Meaning:

```text
Is a > b?
  ↓
Yes → largest = a
No  → largest = b
```

---

# 11. Largest of Three Numbers

A simple beginner-friendly approach is to find the largest step by step.

## Logic

```text
Read a, b, c
     ↓
Find largest between a and b
     ↓
Compare that largest with c
     ↓
Final largest
```

## Example

```c
largest = (a > b) ? a : b;

largest = (largest > c) ? largest : c;
```

### Example

For:

```text
a = 10
b = 25
c = 15
```

First:

```text
largest = 25
```

Then:

```text
25 > 15
```

So:

```text
largest = 25
```

---

# 12. Multiplying Largest of First Two Numbers with Third Number

Question:

> Read 3 numbers and multiply the largest number from the first two numbers with the third number.

## Important Point

Only the first two numbers are compared.

For:

```text
a = 10
b = 20
c = 5
```

First find:

```c
largest = (a > b) ? a : b;
```

Then:

```c
result = largest * c;
```

Result:

```text
20 × 5 = 100
```

Do NOT compare all three numbers if the question specifically says "largest from first two numbers".

---

# 13. Checking Whether a Character is an Alphabet

An alphabet can be:

```text
A to Z
```

or

```text
a to z
```

## Logic

```c
(ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
```

Then use the conditional operator:

```c
condition
    ? printf("Alphabet")
    : printf("Not an alphabet");
```

## Logic Flow

```text
Read character
      ↓
Is it A-Z OR a-z?
      ↓
   Yes     No
    ↓       ↓
Alphabet  Not alphabet
```

---

# 14. Character Comparison in C

Characters are written using single quotes.

Correct:

```c
'A'
'Z'
'a'
'z'
'+'
'-'
```

Incorrect:

```c
"A"
"Z"
"+"
```

Double quotes are used for strings.

Example:

```c
char ch = 'A';
```

Not:

```c
char ch = "A";
```

---

# 15. Common Mistakes in switch...case

## Mistake 1: Forgetting break

Wrong:

```c
case 1:
    printf("Monday");

case 2:
    printf("Tuesday");
```

Correct:

```c
case 1:
    printf("Monday");
    break;

case 2:
    printf("Tuesday");
    break;
```

---

## Mistake 2: Using a condition inside case

Wrong:

```c
case day == 1:
```

Correct:

```c
case 1:
```

`case` contains a value, not a condition.

---

## Mistake 3: Forgetting colon

Wrong:

```c
case 1
    printf("Monday");
```

Correct:

```c
case 1:
    printf("Monday");
```

---

## Mistake 4: Using duplicate case values

Wrong:

```c
case 1:
    printf("One");
    break;

case 1:
    printf("Another One");
    break;
```

The same case value should not be repeated.

---

## Mistake 5: Forgetting default

`default` is not compulsory, but it is useful for handling invalid input.

Recommended:

```c
default:
    printf("Invalid choice");
```

---

# 16. Common Mistakes in Conditional Operator

## Mistake 1: Wrong syntax

Wrong:

```c
condition ? value1 value2;
```

Correct:

```c
condition ? value1 : value2;
```

The `:` is required.

---

## Mistake 2: Confusing `=` and `==`

Assignment:

```c
a = 10;
```

Comparison:

```c
a == 10
```

For conditions, use `==` when checking equality.

Example:

```c
(num % 2 == 0)
```

---

## Mistake 3: Forgetting parentheses

This is clearer:

```c
largest = (a > b) ? a : b;
```

Instead of trying to write complicated expressions without understanding operator precedence.

---

# 17. Common scanf Mistakes

## Integer

```c
int num;
scanf("%d", &num);
```

## Float

```c
float num;
scanf("%f", &num);
```

## Character

```c
char ch;
scanf(" %c", &ch);
```

## Multiple integers

```c
scanf("%d %d %d", &a, &b, &c);
```

### Common Mistake

Forgetting `&`.

Wrong:

```c
scanf("%d", num);
```

Correct:

```c
scanf("%d", &num);
```

---

# 18. Common Mistakes with Character Input

When reading a character after another `scanf`, use:

```c
scanf(" %c", &ch);
```

The space before `%c` is important for beginners because it allows `scanf` to skip whitespace such as the newline left in the input buffer.

---

# 19. Common Mistakes with Output

For integer:

```c
printf("%d", num);
```

For float:

```c
printf("%.2f", num);
```

For character:

```c
printf("%c", ch);
```

Remember:

```text
%d → int
%f → float
%c → char
```

---

# 20. Quick Revision Table

| Concept | Syntax / Example | Purpose |
|---|---|---|
| switch | `switch(choice)` | Select one option |
| case | `case 1:` | Represents an option |
| break | `break;` | Exit switch |
| default | `default:` | Handles invalid/unmatched choice |
| Conditional operator | `condition ? a : b` | Choose between two values/actions |
| Remainder | `num % 2` | Find remainder |
| Equality | `a == b` | Compare two values |
| Assignment | `a = b` | Assign a value |
| Character | `'A'` | Single character |
| String | `"Hello"` | Multiple characters |

---

# 21. Exam/Lab Logic Checklist

Before writing a program, ask:

1. What is the input?
2. What is the output?
3. Is the question asking for fixed choices?
   - Use `switch`.
4. Is the question asking for a simple either/or decision?
   - Consider the conditional operator.
5. What condition should be checked?
6. Do I need `break` after each case?
7. What should happen for invalid input?
8. Am I using the correct `scanf` format specifier?
9. Did I use `&` with `scanf` variables?
10. Did I use `==` for comparison and `=` for assignment?

---

# 22. Most Important Patterns for This Lab

## Pattern 1 – switch

```c
switch(choice)
{
    case 1:
        // code
        break;

    case 2:
        // code
        break;

    default:
        // invalid choice
}
```

## Pattern 2 – conditional operator

```c
result = (condition) ? value1 : value2;
```

## Pattern 3 – print based on condition

```c
(condition) ? printf("Yes") : printf("No");
```

## Pattern 4 – find larger of two

```c
largest = (a > b) ? a : b;
```

## Pattern 5 – even/odd

```c
(num % 2 == 0) ? printf("Even") : printf("Odd");
```

## Pattern 6 – alphabet check

```c
(ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
```

---

# 23. Beginner Tip

Do not try to memorize complete programs.

For this lab, remember these basic building blocks:

```text
switch → multiple fixed choices

case → one choice

break → stop switch

default → invalid/other choice

? : → two possible choices

% → remainder

== → comparison

= → assignment
```

Once these are clear, most of the programs in this practical can be built by combining these simple patterns.
