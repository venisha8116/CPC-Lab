// 3. Multiply and divide a number by 2 without using multiplication/division operator.

#include <stdio.h>

int main() {
    int num;

    // Take a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    /*
        Left Shift Operator (<<)
        Shifting the bits 1 position to the left is equivalent
        to multiplying the number by 2.

        Example:
        5 = 0101
        5 << 1 = 1010 = 10

        Therefore: num << 1 = num * 2
    */
    int multiplied = num << 1;

    /*
        Right Shift Operator (>>)
        Shifting the bits 1 position to the right is equivalent
        to dividing a positive integer by 2.

        Example:
        10 = 1010
        10 >> 1 = 0101 = 5

        Therefore: num >> 1 = num / 2
    */
    int divided = num >> 1;

    // Display the results
    printf("Multiplied by 2: %d\n", multiplied);
    printf("Divided by 2: %d\n", divided);

    return 0;
}
