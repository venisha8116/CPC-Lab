// 3.  Find all prime numbers between given interval using functions.

#include<stdio.h>

int is_prime(int num){
    if(num <= 1) return 0; // Not prime
    for(int i=2; i*i<=num; i++){
        if(num % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}

int main(){
    int lower, upper;

    printf("Enter lower and upper interval : ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);
    for(int num = lower; num <= upper; num++){
        if(is_prime(num)){
            printf("%d ", num);
        }
    }
}