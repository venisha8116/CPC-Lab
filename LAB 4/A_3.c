// 3. Print addition of 2 numbers. (with & without scanf) 

#include<stdio.h>

int main(){
    // with scanf()
    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d",&a, &b);
    printf("Sum of %d and %d = %d\n",a, b, a+b);

    // without scanf()
    int c=3,d=7; // redeclaration of a variable in c is not allowed. Hence, either we override the values of a and b or use 2 new variables.
    printf("Sum of %d and %d = %d",c, d, c+d);

    return 0;
}