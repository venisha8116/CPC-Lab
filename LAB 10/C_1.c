// 1. Check whether the given number is Armstrong or not.  

#include<stdio.h>

int main(){
    int num, orig, sum, digit, count;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    orig = num;
    sum = 0;
    count = 0;
    
    // Count total digits
    int temp = num;
    while(temp > 0){
        count = count + 1;
        temp = temp / 10;
    }
    
    // Calculate sum of each digit raised to power of count
    temp = num;
    while(temp > 0){
        digit = temp % 10;
        int pow = 1;
        int p = count;
        while(p > 0){
            pow = pow * digit;
            p = p - 1;
        }
        sum = sum + pow;
        temp = temp / 10;
    }
    
    if(sum == orig){
        printf("%d is an Armstrong Number\n", orig);
    } else {
        printf("%d is Not an Armstrong Number\n", orig);
    }
    
    return 0;
}