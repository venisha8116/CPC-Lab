// 5.  Find factorial of the given number.

#include <stdio.h>

int main()
{
    int i, n;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // factorial of a number
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}