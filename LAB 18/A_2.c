// 2.  Find maximum and minimum between two numbers using function.

#include<stdio.h>

int max(int n1, int n2){
    return n1>=n2 ? n1 : n2; 
}

int min(int n1, int n2){
    return n1<=n2 ? n1 : n2; 
}

int main(){
    int num1, num2;

    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);

    int maximum = max(num1, num2);
    int minimum = min(num1, num2);

    printf("Maximum of %d and %d is %d\n", num1, num2, maximum);
    printf("Minimum of %d and %d is %d\n", num1, num2, minimum);
}