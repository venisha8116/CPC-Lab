// 1.  Find factorial of a number using function and recursive function. 

#include<stdio.h>

int FactorialRecursion(int n){
    if(n==0 || n==1) return 1;

    return n * FactorialRecursion(n-1);
}

int FactorialIterative(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = i*fact;
    }

    return fact;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int ansR = FactorialRecursion(n);
    int ansI = FactorialIterative(n);
    printf("Factorial of %d = %d (Recursive)\nFactorial of %d = %d (Iterative)", n, ansR, n, ansI);
}