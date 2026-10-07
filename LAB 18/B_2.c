// 2.  Check whether a number is prime, Armstrong or perfect number using functions. (create custom library)

#include <stdio.h>
#include "custom_math_library.h"

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (is_prime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isPerfect(num))
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.", num);
    }
}