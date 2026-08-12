// 5. Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 70.  

#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    // Calculate total marks
    total = s1 + s2 + s3 + s4 + s5;

    // Assuming each subject is out of 100
    percentage = total / 5;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage < 35) {
        printf("Class: Fail");
    }
    else if (percentage <= 45) {
        printf("Class: Pass Class");
    }
    else if (percentage <= 60) {
        printf("Class: Second Class");
    }
    else if (percentage <= 70) {
        printf("Class: First Class");
    }
    else {
        printf("Class: Distinction");
    }

    return 0;
}