// 2. C Program ƒnd nCr (Combination) and nPr (Permutation).  
// (Formula: nCr = n!/(r!*(n-r)!), nPr = n!/(n-r)!)

#include <stdio.h>

long long factorial(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

long long find_nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

long long find_nCr(int n, int r) {
    // Formula: n! / (r! * (n - r)!)
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    // Validation check: n must be greater than or equal to r, and both non-negative
    if (n < 0 || r < 0 || n < r) {
        printf("Invalid Input. Make sure n >= r and both are non-negative.\n");
    } else {
        long long nPr = find_nPr(n, r);
        long long nCr = find_nCr(n, r);

        printf("\nResults:\n");
        printf("Permutation (%d P %d) = %lld\n", n, r, nPr);
        printf("Combination (%d C %d) = %lld\n", n, r, nCr);
    }

    return 0;
}

