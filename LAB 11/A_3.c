// 3.  Print multiplication table of a given number.

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Multiplication Table
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}