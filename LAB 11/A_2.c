// 2.  Print sum of 1 to n numbers.

#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // Sum  of 1 to n
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}