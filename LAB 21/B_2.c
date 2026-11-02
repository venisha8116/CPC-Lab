// 2. Demonstrate nested structure. 

#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int age;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("Name : %s\n", emp.name);
    printf("Age : %d", emp.age);
    printf("Salary : %.2f\n", emp.salary);
    printf("Joining Date : %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
}