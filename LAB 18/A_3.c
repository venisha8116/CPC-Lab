#include <stdio.h>

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest = %.2f\n", simpleInterest(p, r, t));

    return 0;
}