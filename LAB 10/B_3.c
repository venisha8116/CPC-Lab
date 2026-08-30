// 3.  Check whether the given number is palindrome or not. 

#include<stdio.h>

int main(){
    int num, orig, reverse, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    orig = num;  // Store original number
    reverse = 0;
    
    // Build reverse number
    while(num > 0){
        digit = num % 10;  // Get last digit
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
    
    if(orig == reverse){
        printf("%d is a Palindrome\n", orig);
    } else {
        printf("%d is Not a Palindrome\n", orig);
    }
    
    return 0;
}