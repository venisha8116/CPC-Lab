// 1.  Check whether the given number is perfect or not. 

#include<stdio.h>

int main(){
    int num, i, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    sum = 0;
    i = 1;
    
    // Sum all divisors (except the number itself)
    while(i < num){
        if(num % i == 0){
            sum = sum + i;  // Add divisor to sum
        }
        i = i + 1;
    }
    
    if(sum == num){
        printf("%d is a Perfect Number\n", num);
    } else {
        printf("%d is Not a Perfect Number\n", num);
    }
    
    return 0;
}