// 1. Find reverse of any number using recursion.  

#include<stdio.h>

int reverseNumber(int num, int reversed){
    if(num==0) return reversed;

    int last = num % 10;
    reversed = reversed*10 + last;

    return reverseNumber(num / 10, reversed);
}

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int rev = reverseNumber(num, 0);
    printf("Reversed Number : %d", rev);
}