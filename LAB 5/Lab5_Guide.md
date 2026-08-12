# Lab 5: Decision Making in C (Conditional Statements)

Decision-making statements allow your program to break out of a strict line-by-line sequence. They evaluate conditions and execute different blocks of code based on whether those conditions are **True (non-zero)** or **False (0)**.

---

## 1. Relational and Logical Operators

Before making decisions, your program needs to compare data values.

### 📊 Relational Operators (Comparisons)
Used to compare two values. The result is always `1` (True) or `0` (False).

| Operator | Meaning | Example | True If... |
| :---: | :--- | :--- | :--- |
| `==` | Equal to | `x == 5` | `x` is exactly 5 |
| `!=` | Not equal to | `x != 5` | `x` is anything except 5 |
| `>` | Greater than | `x > 5` | `x` is 6, 7, 8... |
| `<` | Less than | `x < 5` | `x` is 4, 3, 2... |
| `>=` | Greater than or equal to | `x >= 5` | `x` is 5, 6, 7... |
| `<=` | Less than or equal to | `x <= 5` | `x` is 5, 4, 3... |

⚠️ **Common Error:** Do not confuse `=` (Assignment) with `==` (Equality comparison). Writing `if (x = 5)` overwrites `x` with 5 instead of checking its value!

### 🧠 Logical Operators (Combining Conditions)
Used to combine multiple relational expressions.

| Operator | Name | Behavior | Example Syntax |
| :---: | :--- | :--- | :--- |
| `&&` | **AND** | True only if **all** conditions are true. | `(age >= 18) && (weight >= 50)` |
| `\|\|` | **OR** | True if **at least one** condition is true. | `(score > 90) \|\| (total == 100)` |
| `!` | **NOT** | Reverses the logic (True becomes False). | `!(x == 0)` |

---

## 2. Conditional Syntaxes and Implementations

### 💡 Case 1: The Simple `if` Statement
Executes a block of code **only** if the condition evaluates to true. If false, it skips it entirely.

```c
#include <stdio.h>

int main(void) {
    int score;
    printf("Enter your test score: ");
    scanf("%d", &score);

    if (score >= 50) {
        printf("Congratulations! You passed.\n");
    }

    return 0;
}
```

### 💡 Case 2: The `if-else` Statement
Provides an alternative block of instructions when the condition fails.

```c
#include <stdio.h>

int main(void) {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Using the modulus operator (%) to check for odd/even
    if (number % 2 == 0) {
        printf("%d is an EVEN number.\n", number);
    } else {
        printf("%d is an ODD number.\n", number);
    }

    return 0;
}
```

### 💡 Case 3: The `if-else if-else` Ladder
Used to check multiple, mutually exclusive conditions in sequence. The program stops checking down the ladder as soon as it finds its first true match.

```c
#include <stdio.h>

int main(void) {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 75) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
```

### 💡 Case 4: Nested `if` Statements
An `if` statement placed completely inside another `if` statement. Used for multi-layered requirement checks.

```c
#include <stdio.h>

int main(void) {
    int age;
    float weight;

    printf("Enter your age and weight: ");
    scanf("%d %f", &age, &weight);

    // Outer check
    if (age >= 18) {
        // Inner check (only runs if outer check is true)
        if (weight >= 50.0) {
            printf("You are eligible to donate blood.\n");
        } else {
            printf("You are old enough, but your weight is too low.\n");
        }
    } else {
        printf("You must be at least 18 years old to donate.\n");
    }

    return 0;
}
```

---

## 3. Core Structural Nuances for Beginners

*   **Curly Braces `{ }` Rules:** If a block contains only **one single line** of instruction code, the curly braces are technically optional. However, it is highly recommended to always teach freshers to use them to avoid bugs when adding lines later.
    ```c
    // Valid but risky:
    if (x > 0) 
        printf("Positive");

    // Best practice:
    if (x > 0) {
        printf("Positive");
    }
    ```
*   **The Dangling `else` Problem:** An `else` statement always hooks itself to the nearest preceding `if` statement in its current block scope, regardless of how you indent the text. Use explicit curly braces to control exactly which `if` statement owns the `else`.


---
