// 2.  Find whether the given number is prime or not using flag. 

#include<stdio.h>

int main(){
    int num, i, flag;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    flag = 1;  // Flag: 1=prime, 0=not prime
    i = 2;
    
    // Check if number has any divisors
    while(i < num){
        if(num % i == 0){
            flag = 0;  // Set flag to not prime
            break;
        }
        i = i + 1;
    }
    
    if(flag == 1){
        printf("%d is Prime\n", num);
    } else {
        printf("%d is Not Prime\n", num);
    }
    
    return 0;
}