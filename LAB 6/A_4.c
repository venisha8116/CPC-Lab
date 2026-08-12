// 4. Input an integer number and check the last digit of number is even or odd.

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the number is divisible by 2, its last digit is even (and vice-versa).
    if (num % 2 == 0) {
        printf("Last digit is even.");
    }
    else {
        printf("Last digit is odd.");
    }

    return 0;
}