# Lab 21: Structures and Unions in C

- Topics: structures, unions, arrays of structures, nested structures, and structure pointers.
## Structure and Union

- A **structure** groups related variables, possibly of different types, under one name. Each member has its own storage, so all members can hold values at the same time.
- A **union** groups different types under one name, but its members share the same storage. It can hold a meaningful value for only one member at a time; assigning another member replaces the shared contents.
- Both use member access with a dot for a variable and an arrow for a pointer.

| Feature | Structure (`struct`) | Union (`union`) |
| --- | --- | --- |
| Member storage | Separate storage for each member | All members share storage |
| Values | All members can be used at the same time | Use the most recently assigned member |
| Size | Enough for all members, including possible padding | Enough for its largest member, including possible alignment padding |
| Typical use | Keep a complete record, such as employee details | Save memory when alternatives are used one at a time |

## Structure Syntax

### Define, declare, and initialize

```c
struct Student {
    char name[10];
    int age;
    float percentage;
};

struct Student s1;
struct Student s2 = {"Asha", 20, 91.5f};
```

- Define the member layout before declaring variables of that structure type.
- Initialize members in the order they are declared.

### Read and display members

```c
scanf(" %[^\n]", s1.name);
scanf("%d", &s1.age);
scanf("%f", &s1.percentage);

printf("%s %d %.2f\n", s1.name, s1.age, s1.percentage);
```

- For `scanf`, pass the address of scalar members such as integers and floats.
- A character array used as a string already provides an address; do not add `&`.
- The leading space in `" %49[^\n]"` skips leftover whitespace and reads a line up to the buffer limit.
- In `printf`, pass member values directly. Common format specifiers are `%s` for strings, `%d` for integers, and `%f` for floating-point values.

### Array and nested structure access

```c
struct Student class[5];
class[0].age = 20;

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    struct Date joiningDate;
};

struct Employee emp;
emp.joiningDate.day = 17;
```

- Use the array index before the dot to access a structure in an array.
- Use a dot for each level of a nested structure.

### Structure pointer

```c
struct Student *ptr = &s1;

scanf("%d", &ptr->age);
printf("%d\n", ptr->age);
```

- `ptr->age` accesses a member through a structure pointer; it is equivalent to `(*ptr).age`.
- For a character-array member, use the arrow expression as the string destination or value, without adding `&`.

## Union Syntax

```c
union Data {
    int number;
    float measurement;
    char label[20];
};

union Data value;
value.number = 10;
printf("%d\n", value.number);
```

- Declare and access union members using the same pattern as structures.
- Read or display only the member whose value was most recently stored. Do not expect earlier member values to remain intact.

## Logic of the Lab Programs

### A: Structure Basics

- **A_1 — Initialize employee details**
  - Define a record containing an employee’s name, age, and salary.
  - Create and initialize one employee record.
  - Display each stored field.
- **A_2 — Read and display three books**
  - Define a record for each book’s title, author, publication, and price.
  - Collect details for three records, then display them.
  - The current source has an incomplete price-input step and omits the author value in its display call; complete these to handle all fields correctly.
- **A_3 — Store five students**
  - Define a student record with name, percentage, and age.
  - Read five records into an array, then display each student’s details.
- **A_4 — Nested employee details**
  - Define a date record and include it as a member of an employee record.
  - Read the employee fields and the three parts of the joining date.
  - Display the employee details, formatting the date as day, month, and year.

### B: Structure Operations

- **B_1 — Access a structure through a pointer**
  - Create and initialize an employee record.
  - Store its address in a structure pointer.
  - Display the employee fields through that pointer.
- **B_2 — Add two times**
  - Read hours, minutes, and seconds for two times.
  - Add corresponding fields.
  - Convert every group of sixty seconds into one minute, then every group of sixty minutes into one hour.
  - Display the normalized total.

### C: Structure and Union Applications

- **C_1 — Compare a structure and a union**
  - Create matching employee fields in a structure and a union.
  - Enter and display the structure fields to show that they remain available together.
  - Assign the union fields in sequence and observe that the shared storage retains only the latest member’s value.
- **C_2 — Add two distances**
  - Read feet and inches for two distances.
  - Add the corresponding fields.
  - Convert each group of twelve inches into one foot.
  - Display the normalized total.

## Key Takeaways

- Structures keep all member values independently; unions reuse storage between members.
- Use the dot operator for structure or union variables and the arrow operator for pointers.
- Nested structures and arrays of structures organize related records clearly.

