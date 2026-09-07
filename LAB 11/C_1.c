// 1. Swap first and last digits of a number. 

#include <stdio.h>

int main()
{
    int n, first, last, middle;
    int divisor = 1;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find divisor for first digit
    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    
    first = n / divisor; // divisor denotes the highest placevalue of the number. divide that   placevalue by the number itself and the quotient is the first digit.
    last = n % 10; // the last digit is the remainder left by the division of number by 10.

    // Remove first and last digits
    middle = (n % divisor) / 10; 

    n = last * divisor + middle * 10 + first;

    printf("After swapping = %d", n);

    return 0;
}