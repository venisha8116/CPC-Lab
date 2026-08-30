// 3.  Find whether the given number is prime or not. 

#include<stdio.h>

int main(){
    int num, i, isPrime;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    isPrime = 1;  // Assume prime
    i = 2;
    
    // Check divisibility from 2 to num-1
    while(i < num){
        if(num % i == 0){
            isPrime = 0;  // Not prime
            break;
        }
        i = i + 1;
    }
    
    if(isPrime == 1){
        printf("%d is Prime\n", num);
    } else {
        printf("%d is Not Prime\n", num);
    }
    
    return 0;
}