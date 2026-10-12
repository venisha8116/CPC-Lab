#include <stdio.h>

float maximum(float a, float b, float c)
{
    float max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main()
{
    float a, b, c;

    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Maximum = %.2f\n", maximum(a, b, c));

    return 0;
}