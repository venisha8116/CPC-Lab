// 3. Multiply and divide a number by 2 without using multiplication/division operator.

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Left shift multiplies by 2, Right shift divides by 2
    int multiplied = num << 1;
    int divided = num >> 1;

    printf("Multiplied by 2: %d\n", multiplied);
    printf("Divided by 2: %d\n", divided);

    return 0;
}

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter any integer (positive, negative, or zero): ");
//     scanf("%d", &num);

//     // Safe multiplication for negative/positive/zero
//     // casting to unsigned prevents undefined behavior during left shift
//     int multiplied = (int)((unsigned int)num << 1);

//     // Safe division that mimics standard '/' rounding for negative odd numbers
//     int divided;
//     if (num < 0 && (num & 1)) {
//         divided = (num + 1) >> 1; // Adjust odd negatives before shifting
//     } else {
//         divided = num >> 1;
//     }

//     printf("Multiplied by 2: %d\n", multiplied);
//     printf("Divided by 2: %d\n", divided);

//     return 0;
// }
