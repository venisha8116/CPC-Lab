# Lab 13: Arrays in C

In this lab, we learn how to declare, input, access, and process arrays in C. We perform common operations such as counting, finding maximum and minimum values, calculating averages, sorting, finding duplicates and missing numbers, and removing duplicate elements using loops and array logic.

---

## 1. What is an Array in C?

An array is a sequential collection of multiple values of the same data type stored under one variable name.

For example, instead of making separate variables:

```c
int n1, n2, n3, n4, n5;
```

we can use one array:

```c
int a[5];
```

The array has 5 positions:

```text
Index:   0    1    2    3    4
Value:  10   20   30   40   50
```

### Important point

C array indexing starts from 0, not 1.

For an array of size `n`:

```text
First index = 0
Last index  = n - 1
```

---

## 2. Why Do We Need Arrays?

Suppose we need to store marks of 100 students.

Without an array:

```text
mark1, mark2, mark3, ... mark100
```

This becomes difficult to manage.

With an array:

```c
marks[100]
```

we can access every mark using an index.

Arrays are useful when:

- We have many values of the same type.
- We want to process values using loops.
- We need to search values.
- We need to sort values.
- We need to calculate sum, average, maximum, minimum, etc.
- We need to compare elements with each other.

---

## 3. Basics of Arrays in C

### 3.1 Declaration

General form:

```c
data_type array_name[size];
```

Example:

```c
int a[5];
```

This creates 5 integer positions.

---

### 3.2 Declaration and Initialization Together

Example:

```c
int a[5] = {10, 20, 30, 40, 50};
```

This creates an array of size 5 and all elements are initialized with the given values.

---

### 3.3 Declaration Without Specifying Size

Example:

```c
int a[] = {10, 20, 30, 40, 50};
```

The compiler automatically calculates the size. Here, the size becomes 5 because 5 values are given.

---

### 3.4 Partial Initialization

Example:

```c
int a[5] = {10, 20};
```

The remaining elements are automatically initialized to 0.

```text
a[0] = 10
a[1] = 20
a[2] = 0
a[3] = 0
a[4] = 0
```

---

### 3.5 Storing Values

Individual positions can be accessed using indexes.

```text
a[0] -> first element
a[1] -> second element
a[2] -> third element
```

Example:

```text
a = 10 20 30 40 50
a[0] = 10
a[1] = 20
a[4] = 50
```

---

### 3.6 Taking Array Input

Usually a `for` loop is used.

Logic:

```text
for i = 0 to n-1
    read a[i]
```

This means:

```text
i = 0 -> read first element
i = 1 -> read second element
i = 2 -> read third element
...
```

---

### 3.7 Printing an Array

Logic:

```text
for i = 0 to n-1
    print a[i]
```

---

### 3.8 Reverse Traversal

To print an array in reverse:

```text
Start from n-1
Go down to 0
```

For:

```text
10 20 30 40
```

indexes are:

```text
0 1 2 3
```

Reverse traversal:

```text
3 -> 2 -> 1 -> 0
```

Output:

```text
40 30 20 10
```

---

## 4. Common Variables Used in Array Programs

| Variable | Purpose |
|---|---|
| `a[100]` | Stores array elements |
| `n` | Stores number of elements entered by the user |
| `i` | Usually controls array traversal |
| `j` | Usually used for a second loop when comparing/searching elements |
| `sum` | Stores total of all elements |
| `avg` | Stores average |
| `max` | Stores largest element found so far |
| `min` | Stores smallest element found so far |
| `count` | Counts how many elements satisfy a condition |
| `temp` | Temporarily stores a value during swapping |
| `found` | Indicates whether an element was found |
| `k` | Tracks the position/count of unique elements |
| `expected` | Stores the next number expected in a sequence |

---

# A. Array Programs

## A1. Read n numbers and print in normal and reverse order

### Problem

Read `n` numbers from the user and print:

1. Normal order
2. Reverse order

### Example

Input:

```text
10 20 30 40 50
```

Output:

```text
Normal: 10 20 30 40 50
Reverse: 50 40 30 20 10
```

### Logic

#### Step 1 — Read `n`

Find out how many elements the user wants to enter.

#### Step 2 — Store elements

Use a loop from index `0` to `n - 1`.

#### Step 3 — Print normal order

Traverse:

```text
0 -> 1 -> 2 -> ... -> n-1
```

#### Step 4 — Print reverse order

Traverse:

```text
n-1 -> n-2 -> ... -> 0
```

### Flow

```text
Start
  ↓
Read n
  ↓
Read n array elements
  ↓
Print from 0 to n-1
  ↓
Print from n-1 to 0
  ↓
End
```

### Variable purpose

- `a[100]` -> stores the numbers.
- `n` -> tells how many numbers exist.
- `i` -> moves through the array.

### Trace

Suppose:

```text
n = 4
a = 10 20 30 40
```

Normal:

```text
i=0 -> 10
i=1 -> 20
i=2 -> 30
i=3 -> 40
```

Reverse:

```text
i=3 -> 40
i=2 -> 30
i=1 -> 20
i=0 -> 10
```

---

## A2. Count Positive and Negative Numbers

### Problem

Count how many elements are positive and how many are negative.

Example:

```text
Input: 10 -5 7 -2 0 8
```

Output:

```text
Positive = 3
Negative = 2
```

`0` is neither positive nor negative.

### Logic

For every element:

```text
If element > 0
    positive count increases
Else if element < 0
    negative count increases
```

### Flow

```text
Start
  ↓
Read n
  ↓
Read each element
  ↓
Is element > 0?
  ├─ Yes -> positive++
  └─ No
      ↓
      Is element < 0?
      ├─ Yes -> negative++
      └─ No -> Ignore zero
  ↓
Repeat for all elements
  ↓
Print counts
  ↓
End
```

### Variable purpose

- `a[100]` -> stores the numbers.
- `n` -> number of elements.
- `i` -> visits every element.
- `positive` -> counts positive numbers.
- `negative` -> counts negative numbers.

Both counters start at `0` because initially no numbers have been counted.

### Trace

Array:

```text
5 -3 7 0 -8
```

| Element | Action | Positive | Negative |
|---:|---|---:|---:|
| 5 | positive | 1 | 0 |
| -3 | negative | 1 | 1 |
| 7 | positive | 2 | 1 |
| 0 | ignore | 2 | 1 |
| -8 | negative | 2 | 2 |

Final:

```text
Positive = 2
Negative = 2
```

---

## A3. Count Even and Odd Numbers

### Logic

For every element:

```text
If element % 2 == 0
    even++
Else
    odd++
```

The `%` operator gives the remainder.

Examples:

```text
8 % 2 = 0 -> even
7 % 2 = 1 -> odd
```

### Flow

```text
Read array
  ↓
Take one element
  ↓
Is element divisible by 2?
  ├─ Yes -> even++
  └─ No  -> odd++
  ↓
Repeat
  ↓
Print counts
```

### Variable purpose

- `a[100]` -> stores elements.
- `n` -> number of elements.
- `i` -> array index.
- `even` -> counts even elements.
- `odd` -> counts odd elements.

### Trace

Array:

```text
4 7 10 3 8
```

| Element | `% 2` | Result | Count |
|---:|---:|---|---|
| 4 | 0 | Even | even = 1 |
| 7 | 1 | Odd | odd = 1 |
| 10 | 0 | Even | even = 2 |
| 3 | 1 | Odd | odd = 2 |
| 8 | 0 | Even | even = 3 |

Final:

```text
Even = 3
Odd = 2
```

---

## A4. Find Maximum, Minimum, Sum and Average

### Logic

We need four things:

```text
Sum -> add every element
Maximum -> find largest element
Minimum -> find smallest element
Average -> sum / n
```

#### Maximum and minimum

Do not start `max` and `min` with `0`, because the array may contain negative numbers.

Instead:

```text
max = first element
min = first element
```

Then compare the remaining elements.

### Flow

```text
Read array
  ↓
sum = 0
  ↓
Add all elements to sum
  ↓
max = first element
min = first element
  ↓
Compare remaining elements
  ↓
Calculate average
  ↓
Print results
```

### Variable purpose

- `a[100]` -> stores numbers.
- `n` -> number of elements.
- `i` -> traverses array.
- `sum` -> total of elements.
- `max` -> largest value found so far.
- `min` -> smallest value found so far.
- `avg` -> average of all values.

### Trace

Array:

```text
10 5 20 8
```

#### Sum

```text
sum = 0
10 -> sum = 10
5 -> sum = 15
20 -> sum = 35
8 -> sum = 43
```

#### Maximum

Start:

```text
max = 10
```

```text
5 < 10 -> no change
20 > 10 -> max = 20
8 < 20 -> no change
```

Maximum = `20`

#### Minimum

Start:

```text
min = 10
```

```text
5 < 10 -> min = 5
20 > 5 -> no change
8 > 5 -> no change
```

Minimum = `5`

Average:

```text
43 / 4 = 10.75
```

---

## A5. Five Persons — Height and Weight

### Problem

Read height and weight of 5 people.

Count people satisfying:

```text
height > 170 AND weight < 50
```

### Logic

For every person:

```text
Read height
Read weight
If height > 170 AND weight < 50
    count++
```

`&&` means both conditions must be true.

### Flow

```text
Start
  ↓
count = 0
  ↓
Read height and weight
  ↓
height > 170 AND weight < 50?
  ├─ Yes -> count++
  └─ No
  ↓
Repeat 5 times
  ↓
Print count
  ↓
End
```

### Variable purpose

- `height[5]` -> stores heights.
- `weight[5]` -> stores weights.
- `i` -> identifies each person.
- `count` -> counts people satisfying both conditions.

### Trace

| Person | Height | Weight | Condition | Count |
|---|---:|---:|---|---:|
| 1 | 175 | 45 | Yes | 1 |
| 2 | 165 | 40 | No | 1 |
| 3 | 180 | 55 | No | 1 |
| 4 | 172 | 48 | Yes | 2 |
| 5 | 160 | 45 | No | 2 |

Answer:

```text
2 persons
```

---

# B. Array Programs

## B1. Count Numbers Higher Than Average

### Logic

This requires two traversals.

#### First traversal

Calculate sum.

```text
sum = sum + a[i]
```

Then:

```text
average = sum / n
```

#### Second traversal

Check every element:

```text
if element > average
    count++
```

### Flow

```text
Read array
  ↓
Calculate sum
  ↓
Calculate average
  ↓
Check every element
  ↓
Is element > average?
  ├─ Yes -> count++
  └─ No
  ↓
Print count
```

### Variable purpose

- `a[100]` -> stores numbers.
- `n` -> number of elements.
- `i` -> array index.
- `sum` -> total.
- `avg` -> calculated average.
- `count` -> number of elements above average.

### Trace

Array:

```text
10 20 30 40
```

Sum:

```text
10 + 20 + 30 + 40 = 100
```

Average:

```text
100 / 4 = 25
```

Compare:

```text
10 > 25? No
20 > 25? No
30 > 25? Yes
40 > 25? Yes
```

Answer:

```text
Count = 2
```

---

## B2. Arithmetic, Geometric and Harmonic Mean

### Important

Use positive, non-zero values for this program because we are calculating the geometric mean.

Suppose:

```text
2 4 8
```

### Arithmetic Mean

```text
(2 + 4 + 8) / 3 = 14 / 3 = 4.67
```

### Geometric Mean

Multiply all elements and take the `n`th root.

```text
(2 × 4 × 8)^(1/3) = 64^(1/3) = 4
```

### Harmonic Mean

Take the reciprocal of every element, add them, then divide `n` by that sum.

```text
3 / (1/2 + 1/4 + 1/8)
```

### Logic

Maintain three pieces of information:

```text
sum = 0
product = 1
reciprocalSum = 0
```

For each element:

```text
sum = sum + element
product = product * element
reciprocalSum = reciprocalSum + 1/element
```

After the loop:

```text
Arithmetic = sum / n
Geometric = nth root of product
Harmonic = n / reciprocalSum
```

### Variable purpose

- `a[100]` -> stores elements.
- `n` -> number of elements.
- `i` -> traverses array.
- `sum` -> needed for arithmetic mean.
- `product` -> needed for geometric mean.
- `reciprocalSum` -> needed for harmonic mean.
- `arithmetic` -> stores arithmetic mean.
- `geometric` -> stores geometric mean.
- `harmonic` -> stores harmonic mean.

### Why does `product` start at 1?

Because:

```text
1 × any number = that number
```

If it started at `0`:

```text
0 × any number = 0
```

and the product would always become zero.

### Trace

Array:

```text
2 4 8
```

| Element | Sum | Product | Reciprocal Sum |
|---:|---:|---:|---:|
| 2 | 2 | 2 | 0.5 |
| 4 | 6 | 8 | 0.75 |
| 8 | 14 | 64 | 0.875 |

Final:

```text
Arithmetic = 14 / 3 = 4.67
Geometric = 64^(1/3) = 4
Harmonic = 3 / 0.875 ≈ 3.43
```

---

## B3. Sort Array in Ascending Order

### Problem

Arrange elements from smallest to largest.

Example:

```text
5 2 8 1 3
```

becomes:

```text
1 2 3 5 8
```

### Logic

Use two loops.

The first loop selects an element.

The second loop compares it with the elements after it.

If the current element is larger:

```text
swap them
```

### Swapping

Suppose:

```text
a[i] = 5
a[j] = 2
```

We need:

```text
a[i] = 2
a[j] = 5
```

A temporary variable is needed:

```text
temp = 5
a[i] = 2
a[j] = temp
```

### Flow

```text
Read array
  ↓
Select element using i
  ↓
Compare with elements using j
  ↓
Is a[i] > a[j]?
  ├─ Yes -> Swap
  └─ No -> Continue
  ↓
Repeat
  ↓
Print sorted array
```

### Variable purpose

- `a[100]` -> stores elements.
- `n` -> number of elements.
- `i` -> selects the current position.
- `j` -> compares with later positions.
- `temp` -> temporarily holds a value during swapping.

### Trace

Array:

```text
5 2 4
```

Start:

```text
i = 0
```

Compare `5` and `2`:

```text
5 > 2 -> swap
```

Array:

```text
2 5 4
```

Compare `2` and `4`:

```text
2 > 4? No
```

Next:

```text
i = 1
```

Compare `5` and `4`:

```text
5 > 4 -> swap
```

Final:

```text
2 4 5
```

---

# C. Array Programs

## C1. Count Duplicate Elements

### Problem

Find how many values occur more than once.

Example:

```text
1 2 2 3 3 3 4
```

Duplicated values are:

```text
2
3
```

So there are 2 duplicated values.

### Logic

Use two loops.

For each element:

```text
Compare it with elements after it.
```

If a matching value is found:

```text
count++
```

and stop checking that particular element.

This prevents the same duplicated value from being counted repeatedly.

### Flow

```text
Read array
  ↓
Select a[i]
  ↓
Compare with a[j]
  ↓
a[i] == a[j]?
  ├─ Yes -> count++ -> stop checking this i
  └─ No -> continue
  ↓
Repeat
  ↓
Print count
```

### Variable purpose

- `a[100]` -> stores elements.
- `n` -> number of elements.
- `i` -> selects an element.
- `j` -> searches for another occurrence.
- `count` -> counts duplicated values.

### Trace

Array:

```text
1 2 2 3 3 3 4
```

For `1`:

```text
No matching value
```

For first `2`:

```text
Another 2 found -> count = 1
```

For first `3`:

```text
Another 3 found -> count = 2
```

Final:

```text
Duplicate values = 2
```

### Important distinction

If the question asks for total extra occurrences, the answer for:

```text
1 2 2 3 3 3 4
```

would be:

```text
3
```

because:

```text
2 -> 1 extra occurrence
3 -> 2 extra occurrences
Total = 3
```

Always check what your question means by “total duplicate elements”.

---

## C2. Find Missing Numbers in a Sequence

### Problem

Given a sorted sequence:

```text
1 2 4 5 7 8 10
```

find:

```text
3 6 9
```

### Important observation

The array is sorted.

Normally, the next expected number after `a[i-1]` is:

```text
a[i-1] + 1
```

So compare:

```text
a[i]
```

with:

```text
a[i-1] + 1
```

If they are different, there are missing numbers between them.

### Logic

For every pair of adjacent elements:

```text
expected = previous element + 1
```

While:

```text
expected < current element
```

print `expected` and increase it.

### Flow

```text
Read sorted array
  ↓
Start from second element
  ↓
expected = a[i-1] + 1
  ↓
Is expected < a[i]?
  ├─ Yes -> print expected
  │        expected++
  │        repeat
  └─ No -> move to next element
  ↓
End
```

### Variable purpose

- `a[100]` -> stores the sorted sequence.
- `n` -> number of elements.
- `i` -> moves through adjacent elements.
- `expected` -> stores the number that should come after the previous element.

### Trace

Array:

```text
1 2 4 5 7 8 10
```

#### Compare 2 with 1

```text
expected = 1 + 1 = 2
2 < 2? No
```

Nothing missing.

#### Compare 4 with 2

```text
expected = 2 + 1 = 3
3 < 4? Yes
```

Print:

```text
3
```

#### Compare 5 with 4

```text
expected = 4 + 1 = 5
5 < 5? No
```

#### Compare 7 with 5

```text
expected = 5 + 1 = 6
6 < 7? Yes
```

Print:

```text
6
```

#### Compare 10 with 8

```text
expected = 8 + 1 = 9
9 < 10? Yes
```

Print:

```text
9
```

Final:

```text
3 6 9
```

### Key idea to remember

```text
Expected next number = previous element + 1
```

---

## C3. Remove Duplicates from a Sorted Array

### Problem

Given a sorted array, remove duplicate elements in-place.

Example:

```text
1 1 2 2 2 3 4 4
```

After processing:

```text
1 2 3 4
```

The number of unique elements is:

```text
k = 4
```

Only the first `k` positions contain the required unique elements.

### Important observation

Because the array is sorted, duplicate elements always appear together.

Example:

```text
1 1 2 2 2 3 4 4
```

We do not need to search the whole array for duplicates.

Instead, we move each new unique value toward the beginning of the same array.

We use:

- `i` -> current position being checked.
- `k` -> next position where a unique element should be stored.
- `k - 1` -> last position that already contains a unique element.
- `nums[k - 1]` -> last unique value.

### Logic

#### Step 1 — Consider the first element unique

The first element is automatically unique because there is no previous element to compare it with.

Therefore:

```text
k = 1
```

This means position `0` already contains a unique element, and position `1` is the next position available for a new unique element.

#### Step 2 — Check each remaining element

Start checking from:

```text
i = 1
```

For every current element `nums[i]`, compare it with the last unique value:

```text
nums[k - 1]
```

#### Step 3 — If current value is different

If:

```text
nums[i] != nums[k - 1]
```

then the current value is a new unique value.

Store it at the next unique position:

```text
nums[k] = nums[i]
```

Then:

```text
k++
```

#### Step 4 — If current value is the same

If:

```text
nums[i] == nums[k - 1]
```

then the current value is a duplicate.

Ignore it and do not change `k`.

### Flow

```text
Read sorted array
  ↓
k = 1
  ↓
First element is already unique
  ↓
Start i from 1
  ↓
Compare nums[i] with nums[k - 1]
  ↓
Is nums[i] != nums[k - 1]?
  ├─ Yes -> nums[k] = nums[i]; k++
  └─ No  -> Ignore duplicate
  ↓
Continue until end
  ↓
k = number of unique elements
  ↓
Print first k elements
```

### Variable purpose

- `nums[100]` -> stores the sorted array and also stores unique elements in-place.
- `n` -> number of elements originally entered.
- `i` -> current position being checked.
- `k` -> next position for a new unique element and final count of unique elements.

### Example walkthrough

Input:

```text
1 1 2 2 2 3 4 4
```

Initially:

```text
k = 1
```

The first `1` is already unique.

Then the algorithm compares each remaining value with the last unique value and keeps only the unique ones at the front.

Result:

```text
1 2 3 4
```

Hence:

```text
Unique elements = 4
```

---

## 5. Most Important Array Concepts for Exam

### 5.1 Index

For:

```c
int a[5];
```

indexes are:

```text
0 1 2 3 4
```

Never:

```text
1 2 3 4 5
```

---

### 5.2 Traversing an Array

Forward:

```text
0 -> n-1
```

Reverse:

```text
n-1 -> 0
```

---

### 5.3 Two Loops

Two loops are commonly needed when elements must be compared with each other.

Used in:

```text
Sorting
Duplicate checking
Searching pairs
```

General idea:

```text
for each element i
    compare with elements j
```

---

### 5.4 Counter

Whenever the question says "Count...", you usually need a variable such as:

```text
count = 0
```

and then:

```text
if condition
    count++
```

---

### 5.5 Sum

Whenever the question says "Find total/sum", use:

```text
sum = 0
```

and repeatedly add:

```text
sum = sum + a[i]
```

---

### 5.6 Maximum

Start with the first element:

```text
max = a[0]
```

Then:

```text
if a[i] > max
    max = a[i]
```

---

### 5.7 Minimum

Start with:

```text
min = a[0]
```

Then:

```text
if a[i] < min
    min = a[i]
```

---

### 5.8 Swapping

To exchange two values:

```text
temp = a[i]
a[i] = a[j]
a[j] = temp
```

Remember: `temp` prevents the original value from being lost.

---

## 6. Quick Revision Table

| Problem | Main Idea | Important Variables |
|---|---|---|
| Normal + Reverse | Traverse forward/backward | `a, n, i` |
| Positive/Negative | Check `> 0` / `< 0` | `positive, negative` |
| Even/Odd | Check `% 2` | `even, odd` |
| Max/Min/Sum/Avg | Compare + accumulate | `max, min, sum, avg` |
| Height/Weight | Use `&&` | `height, weight, count` |
| Above Average | Calculate avg, then compare | `sum, avg, count` |
| Three Means | Sum, product, reciprocals | `sum, product, reciprocalSum` |
| Ascending Sort | Compare + swap | `i, j, temp` |
| Duplicate Count | Compare elements | `i, j, count` |
| Missing Numbers | Compare with previous + 1 | `i, expected` |
| Remove Duplicates | Keep unique elements at front | `i, k` |

---

## 7. Exam Strategy

When you see an array question, first identify what operation is required.

```text
"Print" -> traversal
"Reverse" -> reverse traversal
"Count" -> counter
"Sum" -> accumulator
"Average" -> sum / n
"Maximum" -> comparison
"Minimum" -> comparison
"Sort" -> nested loops + swap
"Duplicate" -> compare elements
"Missing" -> compare sequence
"Remove duplicate" -> keep unique elements
```

### The basic array template in your mind

```text
Declare array
  ↓
Read n
  ↓
Read array using for loop
  ↓
Process array
  ↓
Print result
```

The most important thing is to understand what `i`, `j`, `count`, `sum`, `temp`, `expected`, and `k` are doing rather than memorizing complete programs.
