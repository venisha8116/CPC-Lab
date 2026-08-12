// 2. Swap two numbers. (Using temporary variable and without using temporary variable)

#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("Enter values for a and b : ");
    scanf("%d %d", &a, &b);

    printf("Enter 1 to swap using temporary variable and 2 to swap without using temporary variable : ");
    scanf("%d", &choice);

    printf("Original Values : a = %d, b = %d\n", a, b);

    if (a != b) {
        if (choice == 1) {
            int temp = a;
            a = b;
            b = temp;

            printf("Swapped Values : a = %d, b = %d", a, b);
        }
        else if (choice == 2) {
            // without using temporary variable
            a = a + b;
            b = a - b;
            a = a - b;

            printf("Swapped Values : a = %d, b = %d", a, b);
        }
        else {
            printf("Invalid Choice\n");
        }
    }
    else {
        printf("Swapped Values : a = %d, b = %d", a, b);
    }

    return 0;
}