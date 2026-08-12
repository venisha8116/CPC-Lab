// 3. Check whether given number is positive or negative. 

#include<stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    if(a>=0){
        printf("%d is Positive.", a);
    }
    else {
        printf("%d is Negative.", a);
    }

    return 0;
}    