// 1.  Find out sum of first and last digit of a given number. 

#include<stdio.h>

int main(){
    int num, first, last, temp, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    last = num % 10;  // Get last digit
    
    // Find first digit
    while(temp >= 10){
        temp = temp / 10;
    }
    first = temp;  // First digit
    
    sum = first + last;
    printf("Sum of first and last digit: %d\n", sum);
    
    return 0;
}