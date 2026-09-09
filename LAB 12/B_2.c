// 3.  Estimate the value of the mathematical constant e. (Formula: 𝑒=(1) + 1/1! + 1/2! + 1/3! + 1/4!...)

#include <stdio.h>

int main()
{
    int n, i, j;
    double e = 1;
    double fact;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = 1;

        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        e = e + 1.0 / fact;
    }

    printf("e = %lf\n", e);

    return 0;
}