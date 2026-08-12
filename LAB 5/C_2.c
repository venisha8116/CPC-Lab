// 2. Check whether the given number is odd or even without using % operator.

// In binary formatting, an even number always ends with a 0 in its lowest bit (e.g., 4 = 0100) and an odd number always ends with a 1 (e.g., 5 = 0101).
// When you perform num & 1, the program compares the binary representation of your number against 1 (0001). 
// Because all other bits in the number 1 are zero, the result of the operation depends entirely on the very last bit of your number.

// If num is odd, 1 & 1 equals 1 (true).
// If num is even, 0 & 1 equals 0 (false).

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Bitwise AND checks the lowest/least significant bit
    if (num & 1) {
        printf("%d is odd.\n", num);
    } else {
        printf("%d is even.\n", num);
    }

    return 0;
}
