//3. Addition, subtraction, multiplication and division using switch

#include <stdio.h>

int main()
{
    float num1, num2;
    char choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+':
            printf("Addition = %.2f", num1 + num2);
            break;

        case '-':
            printf("Subtraction = %.2f", num1 - num2);
            break;

        case '*':
            printf("Multiplication = %.2f", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Division = %.2f", num1 / num2);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}