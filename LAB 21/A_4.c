// 4. Create structure student with name, percentage and age. Read data of 5 students using array of structure 

#include<stdio.h>

struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    struct Student students[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}