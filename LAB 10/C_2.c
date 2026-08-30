// 2. Find HCF and LCM of two numbers.

#include<stdio.h>

int main(){
    int a, b, orig_a, orig_b, hcf, lcm;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    orig_a = a;
    orig_b = b;
    
    // Find HCF using Euclidean algorithm
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;  // HCF is stored in a
    
    // Calculate LCM using formula: LCM = (a*b)/HCF
    lcm = (orig_a * orig_b) / hcf;
    
    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);
    
    return 0;
}