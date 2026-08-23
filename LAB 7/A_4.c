//4. Find largest of 3 numbers using conditional operator

#include <stdio.h>

int main()
{
    int a, b, c;
    int largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest number = %d", largest);

    return 0;
}