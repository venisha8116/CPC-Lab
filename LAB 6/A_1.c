// 1. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.

#include <stdio.h>
int main()
{
    int choice;
    float a, b;
    printf("Enter choice\n(1->Addition\n2->Subtraction\n3-Multiplication\n4->Division\n5->Modulo) = :");
    scanf("%d", &choice);
    printf("enter a and b:");
    scanf("%f %f", &a, &b);
    if (choice == 1)
    {
        printf("%f", a + b);
    }
    else if (choice == 2)
    {
        printf("%f", a - b);
    }
    else if (choice == 3)
    {
        printf("%f", a * b);
    }
    else if (choice == 4)
    {
        printf("%f", a / b);
    }
    // The % operator works with only integer types(int).
    // Thus, take a and b as int if you want to apply %.

    // else if(choice==5){
    //     printf("%f", (a%b));
    // }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}