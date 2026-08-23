// 1. Convert a given number into words digit by digit
// This code strictly works for any standard 9-digit number, up to 2 billion.

#include <stdio.h>

int main()
{
    int num, div = 1, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("In words: ");

    // Edge Case 1: Handle zero immediately and exit
    if (num == 0)
    {
        printf("Zero\n");
        return 0;
    }

    // Edge Case 2: Handle negative numbers by converting them to positive
    if (num < 0)
    {
        printf("Minus ");
        num = -num;
    }

    // WHY "num / div >= 10" IS NECESSARY:
    // We want 'div' to match the highest place value of the number.
    // If num = 234, we need div = 100 so that 234 / 100 gives us the first digit '2'.
    //
    // If we checked (num / div > 0), div would keep multiplying and become 1000.
    // But 234 / 1000 = 0, which would break our digit extraction logic.
    // Checking ">= 10" stops the loop the moment 'div' reaches the exact same
    // number of digits as 'num'.
    while (num / div >= 10)
    {
        div *= 10;
    }

    // Main Loop: Extract and print digits from left to right
    while (div > 0)
    {
        // 1. Isolate the leftmost digit (e.g., 234 / 100 = 2)
        rem = num / div;

        // 2. Map the single digit to its word representation
        switch (rem)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }

        // 3. Remove the leftmost digit from the number (e.g., 234 % 100 = 34)
        num %= div;

        // 4. Move to the next smaller place value (e.g., 100 -> 10)
        div /= 10;
    }
    printf("\n");

    return 0;
}
