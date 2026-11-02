// 1. Create, declare and initialize structure employee. 

#include<stdio.h>

// Creating and Declaring the structure
struct Employee {
    char name[50];
    int age;
    float salary;
}; 

int main() {
    // Initializing the structure
    struct Employee emp1 = {"Rahul Shah", 30, 50000.0};

    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Age: %d\n", emp1.age);
    printf("Employee Salary: %.2f\n", emp1.salary);

    return 0;
}