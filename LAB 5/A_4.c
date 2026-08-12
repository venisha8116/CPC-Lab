// 4. Check whether the given number is odd or even. 

#include<stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is even.", a);
    }
    else {
        printf("%d is odd.", a);
    }

    return 0;
}