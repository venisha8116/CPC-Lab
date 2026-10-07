#ifndef CUSTOM_MATH_LIBRARY_H
#define CUSTOM_MATH_LIBRARY_H

// Prime Number Check

int is_prime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}

// Armstrong Number Check

int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;

    // Count digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate sum of powers of digits
    while (originalNum != 0) {
        int digit = originalNum % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        originalNum /= 10;
    }

    return sum == num; // Armstrong if sum equals original number
}

int isPerfect(int num) {
    if (num <= 1) return 0; // Not perfect
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num; // Perfect if sum of divisors equals the number
}
#endif