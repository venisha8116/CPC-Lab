// 3. Demonstrate difference between structure and union.

#include<stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

union Data {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee emp;
    union Data data;

    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("\nStructure Values:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);

    printf("\nEnter data for union (name, age, salary):\n");
    printf("Name: ");
    scanf(" %[^\n]", data.name);
    printf("Age: ");
    scanf("%d", &data.age);
    printf("Salary: ");
    scanf("%f", &data.salary);

    printf("\nUnion Values:\n");
    printf("Name: %s\n", data.name); // Only the last assigned value will be valid
    printf("Age: %d\n", data.age);   // Only the last assigned value will be valid
    printf("Salary: %.2f\n", data.salary); // Only the last assigned value will be valid

    return 0;
}