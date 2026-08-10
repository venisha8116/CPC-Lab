// 2. Print simple interest. (principal*roi*time period)/100)

#include <stdio.h>

int main(void) {
    float principal, rate, simple_interest;
    int time; // Time period kept as an integer for whole years

    printf("Enter the Principal amount, rate and time period : ");
    scanf("%f %f %d", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100.0;

    printf("Calculated Simple Interest = %.2f\n", simple_interest);

    return 0;
}

