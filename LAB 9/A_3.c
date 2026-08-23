// 3. Calculate x^y without using the power function

#include <stdio.h>

int main()
{
    double base;
    double result = 1;
    int exponent;
    int count = 0;
    int negativeExponent = 0;

    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);

    if(exponent < 0)
    {
        negativeExponent = 1;
        exponent = -exponent;
    }

    while(count < exponent)
    {
        result *= base;
        count++;
    }

    if(negativeExponent)
        result = 1 / result;

    printf("Result = %g", result);

    return 0;
}
