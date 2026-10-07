// 5.  Swap two numbers using call by value and call by reference.

#include<stdio.h>

int swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int swapByReference(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main(){
    int num1, num2;

    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2);

    swapByReference(&num1, &num2);
    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);
}