// 4. Find factorial of the given number

#include <stdio.h>

int main()
{
    int number;
    int count = 1;
    int factorial = 1;

    printf("Enter a non-negative number: ");
    scanf("%d", &number);

    if(number < 0)
    {
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }

    while(count <= number)
    {
        factorial *= count;
        count++;
    }

    printf("Factorial = %d", factorial);

    return 0;
}
