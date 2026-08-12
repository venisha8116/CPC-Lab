// 2. Enter basic salary of an employee and calculate Gross salary according to given conditions:

// - Basic Salary >= 10000: HRA = 20% of basic, DA = 80% of basic
// - Basic Salary >= 20000: HRA = 25% of basic, DA = 90% of basic
// - Basic Salary >= 30000: HRA = 30% of basic, DA = 95% of basic

#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic >= 30000) {
        // Basic Salary >= 30000
        // HRA = 30% of Basic Salary
        // DA  = 95% of Basic Salary
        hra = 0.30 * basic;
        da = 0.95 * basic;
    }
    else if (basic >= 20000) {
        // Basic Salary >= 20000 and < 30000
        // HRA = 25% of Basic Salary
        // DA  = 90% of Basic Salary
        hra = 0.25 * basic;
        da = 0.90 * basic;
    }
    else if (basic >= 10000) {
        // Basic Salary >= 10000 and < 20000
        // HRA = 20% of Basic Salary
        // DA  = 80% of Basic Salary
        hra = 0.20 * basic;
        da = 0.80 * basic;
    }
    else {
        hra = 0;
        da = 0;
    }

    // Gross Salary = Basic Salary + HRA + DA
    gross = basic + hra + da;

    printf("Basic Salary = %.2f\n", basic);
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}