// 1.  Add two numbers using function.

#include<stdio.h>

int Add(int n1, int n2){
    return n1+n2;
}

int main(){
    int num1, num2, sum;

    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);

    sum = Add(num1, num2);

    printf("%d + %d = %d", num1, num2, sum);
}