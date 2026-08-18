//5. Check even or odd using conditional operator

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If remainder is 0, number is even
    (num % 2 == 0) ? printf("Even number") : printf("Odd number");

    return 0;
}