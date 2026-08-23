// 2. Convert a decimal number to binary

#include <stdio.h>

int main()
{
    // WARNING: This code only works for numbers up to 1023!
    // Why? Because we are storing binary digits as a normal decimal number.
    // Example: For 22, the variable 'bit' stores the actual number 10,110.
    //
    // In C, a standard integer ('int') can only go up to 2,147,483,647.
    // 1023 in binary is ten 1s: 1,111,111,111 (This fits within 2 billion).
    // 1024 in binary is an 11-digit number: 10,000,000,000.
    // 10 billion is too big for an 'int', causing an "integer overflow" (error).

    int n, binary = 0, placevalue = 1, remainder;
    printf("Enter a decimal number strictly less than 1024: ");
    scanf("%d", &n);
    printf("Decimal number: %d\n", n);

    if (n < 0 || n >= 1024)
        printf("Error: Number must be between 0 and 1023 inclusive.\n");
    else if (n == 0)
    {
        printf("Binary number = 0\n");
    }
    else
    {
        while (n > 0)
        {
            remainder = n % 2;
            binary = binary + (remainder * placevalue); // Maxes out when placevalue reaches 10 billion
            placevalue = placevalue * 10;   // This overflows when n >= 1024
            n = n / 2;
        }

        printf("Binary number = %d\n", binary);
    }
}
