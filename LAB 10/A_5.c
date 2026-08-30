// 5.  Print given number in reverse order. 

#include<stdio.h>

int main(){
    int num, reverse, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    reverse = 0;
    
    // Extract digits and build reverse number
    while(num > 0){
        digit = num % 10;  // Get last digit
        reverse = (reverse * 10) + digit;  // Add to reverse
        num = num / 10;  // Remove last digit
    }
    
    printf("Reverse: %d\n", reverse);
    
    return 0;
}