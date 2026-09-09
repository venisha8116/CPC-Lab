// 1.  Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + ...+ (1+2+3+4+.... +n). 

#include <stdio.h>

int main()
{
    int n, i, j;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}