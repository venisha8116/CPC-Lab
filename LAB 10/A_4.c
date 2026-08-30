// 4.  Print digits of given number. 

#include<stdio.h>

int main(){
    int num, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Digits: ");
    
    // Extract and print each digit from right to left
    while(num > 0){
        digit = num % 10;  // Get last digit
        printf("%d ", digit);
        num = num / 10;  // Remove last digit
    }
    printf("\n");
    
    return 0;
}