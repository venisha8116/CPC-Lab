//1. Multiply largest number from first two numbers with third number using conditional operator

#include <stdio.h>

int main()
{
    int a, b, c;
    int largest;
    int result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the larger number between first two numbers
    largest = (a > b) ? a : b;

    // Multiply the larger number with third number
    result = largest * c;

    printf("Result = %d", result);

    return 0;
}