// 2.  Calculate the average, geometric and harmonic mean of n elements in an array.

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], n, i;
    int sum = 0;
    double product = 1;
    double arithmetic, geometric, harmonic;
    double reciprocalSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter positive elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        sum = sum + a[i];
        product = product * a[i];
        reciprocalSum = reciprocalSum + (1.0 / a[i]);
    }

    arithmetic = (double)sum / n;
    geometric = pow(product, 1.0 / n);
    harmonic = n / reciprocalSum;

    printf("Arithmetic Mean = %.2lf\n", arithmetic);
    printf("Geometric Mean = %.2lf\n", geometric);
    printf("Harmonic Mean = %.2lf\n", harmonic);

    return 0;
}