//3. Addition, subtraction, multiplication and division using switch

#include <stdio.h>

int main()
{
    float num1, num2;
    char choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operation (+, -, *, /): ");
    // " %c" => The single whitespace before %c stores the enter key we press after writing num1 and num2 in terminal.
    // If we do not leave 1 whitespace then the enter key is read as choice and hence the program terminates before we give choice input.
    // Thus, either use a whitespace before %c or use a buffer variable to store that whitespace : 
        // char buffer;
        // scanf("%c", &buffer);
        // scanf("%c", &choice);

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
