// 1. Demonstrate structure pointer. 

#include<stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee emp = {"Rahul Shah", 30, 50000.0};
    struct Employee *empPtr = &emp;

    printf("Employee Name: %s\n", empPtr->name);
    printf("Employee Age: %d\n", empPtr->age);
    printf("Employee Salary: %.2f\n", empPtr->salary);

    return 0;
}