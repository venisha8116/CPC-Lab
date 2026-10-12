#include <stdio.h>
#include "numberlib.h"

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    if (isArmstrong(n))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    if (isPerfect(n))
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}