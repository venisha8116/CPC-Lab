# LAB 4 Guide

```c
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
```

### 🔍 Line-by-Line Breakdown

* **Line 1: `#include <stdio.h>`** 
  * **`#include`** is a preprocessor directive. It tells the compiler to copy-paste the contents of another file into your program before compilation begins.
  * **`<stdio.h>`** stands for *Standard Input Output header*. This library provides standard tools to interact with the user, such as reading from the keyboard or printing to the screen.

* **Line 2: Blank Line**
  * C completely ignores blank lines and whitespace. Use them freely to keep your code organized and readable.

* **Line 3: `int main() {`**
  * **`int`** specifies the *integer return type*. It promises that the program will send a whole number back to the Operating System (OS) when it finishes.
  * **`main`** is the exact function name the compiler looks for. It serves as the official, mandatory entry point where your program execution begins.
  * **`()`** states that this function takes *zero arguments* or inputs to start running.
  * **`{`** is the opening curly brace. It marks the beginning of the `main` function's code block.

* **Line 4: `printf("Hello, World!");`**
  * **`printf()`** is a built-in library function from `<stdio.h>` used to print formatted text to the console screen.
  * **`;`** is a statement terminator. Every standalone instruction in C must end with a semicolon, acting like a period at the end of a sentence.

* **Line 5: `return 0;`**
  * **`return`** exits the current function and hands a value back to the caller. Inside `main`, it terminates the entire program.
  * **`0`** is the status code delivered to the OS. By convention, returning `0` means the program executed successfully without any errors.

* **Line 6: `}`**
  * **`}`** is the closing curly brace. It marks the absolute end of the `main` function block.
# Data Types, Input and Output Functions, Format Specifiers, and Escape Sequences

---

## 1. Primary Data Types
Below is a summary of basic data types in C, their memory consumption, ranges, and examples.

| Data Type | Storage Space | Value Range | Example |
| :--- | :--- | :--- | :--- |
| **Char** | 1 byte | -128 to 127 | `'a'`, `'$'`, `'1'` |
| **Unsigned char** | 1 byte | 0 to 255 | `'a'`, `'$'`, `'1'` |
| **Int** | 4 bytes | -2,147,483,648 to 2,147,483,647 | `1`, `5`, `0` |
| **Short int** | 2 bytes | -32,768 to 32,767 | `1`, `5`, `0` |
| **Unsigned short int** | 2 bytes | 0 to 65,535 | `1`, `5`, `0` |
| **Long int** | 4 bytes | -2,147,483,648 to 2,147,483,647 | `1`, `5`, `0` |
| **Unsigned long int** | 4 bytes | 0 to 4,294,967,295 | `1`, `5`, `0` |
| **Float** | 4 bytes | 3.4E-38 to 3.4E+38 | `10.20`, `20.30` |
| **Double** | 8 bytes | 1.7E-308 to 1.7E+308 | `10.50`, `100058` |
| **Long Double** | 16 bytes | 3.4E-4932 to 1.1E+4932 | `10.20`, `20.30` |
| **Unsigned int** | 4 bytes | 0 to 4,294,967,295 | `1`, `5`, `0` |

> 📌 **Note:** Historically/theoretically `int` is 2 bytes on 16-bit systems, but practically it is 4 bytes on modern architectures.

---

---

## 2. Standard Input and Output Functions

In C, `printf()` and `scanf()` are built-in functions provided by the `<stdio.h>` library. They allow a program to communicate with the user via the console terminal.

---

### 📥 Input Function: `scanf()`
The `scanf()` function stands for **"scan formatted."** It pauses execution and waits for the user to type an input stream from the keyboard.

#### Syntax
```c
scanf("format specifiers", &variable1, &variable2, ...);
```

#### How it Works
* **Format Specifiers:** Tells `scanf()` exactly what type of data to expect from the user (e.g., `%d` for integer, `%f` for float).
* **The Address-of Operator (`&`):** Crucial step. The `&` symbol tells the computer the exact memory address location where the typed input should be saved. *Missing this operator causes a segmentation fault crash.*

### 📤 Output Function: `printf()`
The `printf()` function stands for **"print formatted."** It sends data from the program out to the screen.

#### Syntax
```c
printf("format string", variable1, variable2, ...);
```

#### How it Works
* **Format String:** Text wrapped in double quotes (`""`). It contains literal text to display and optional **Format Specifiers** (like `%d`, `%f`) acting as placeholders for variables.
* **Arguments:** The variables listed after the comma are placed sequentially into the format placeholders.

---

## 3. Format Specifiers for Input via `scanf()` & and Output via `printf()`
Use these specifiers inside `scanf()` and `printf()` to map input streams to their respective memory variables.

| Format Specifier | Supported Data Type | Example Syntax | Description |
| :---: | :--- | :--- | :--- |
| `%c` | Char | `scanf("%c", &c);` `printf("%c", c);` | Accepts a single character (`a`, `f`, `W`) |
| `%c` | Unsigned char | `scanf("%c", &c);` `printf("%c", c);` | Accepts an unsigned character value |
| `%d` | Int | `scanf("%d", &a);` `printf("%d", a);` | Accepts standard integers (`1`, `25`, `105`) |
| `%hd` | Short int | `scanf("%hd", &a);` `printf("%hd", a);` | Accepts short integers |
| `%hu` | Unsigned short int | `scanf("%hu", &a);` `printf("%hu", a);` | Accepts unsigned short integers |
| `%ld` | Long int | `scanf("%ld", &a);` `printf("%ld", a);` | Accepts long integers |
| `%lu` | Unsigned long int | `scanf("%lu", &a);` `printf("%lu", a);` | Accepts unsigned long integers |
| `%f` | Float | `scanf("%f", &b);` `printf("%f", b);` | Accepts decimal/floating values (`1.5`, `15.2`) |
| `%lf` | Double | `scanf("%lf", &b);` `printf("%lf", b);` | Accepts double-precision floating values |
| `%Lf` | Long Double | `scanf("%Lf", &b);` `printf("%Lf", b);` | Accepts extended-precision floating values |
| `%s` | String | `scanf("%s", d);` `printf("%s", d);` | Accepts character strings (e.g., words) |
| `%u` | Unsigned int | `scanf("%u", &a);` `printf("%u", a);` | Accepts strictly positive integers |

---

## 4. Escape Sequences
Special sequence characters used inside string literals (like `printf()`) to control cursor behavior and output formatting.

| Sequence | Name | Description |
| :---: | :--- | :--- |
| `\a` | Alarm / Beep | Generates a terminal bell sound. |
| `\n` | New Line | Moves the cursor to the start of the next line. |
| `\t` | Horizontal Tab | Inserts standard horizontal blank whitespace. |
| `\v` | Vertical Tab | Inserts designated vertical alignment spacing. |
| `\\` | Backslash | Used to literal-print a backslash character. |
| `\'` | Single Quote | Displays a single quotation mark literal. |
| `\"` | Double Quote | Displays a double quotation mark literal. |
| `\b` | Backspace | Shifts the line cursor one space backward. |
| `\0` | NULL | Represents the null terminator string boundary character. |
