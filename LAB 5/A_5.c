// 5. Find out largest number from given three numbers.  

#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a ,b ,c : ");

    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is largest");
        }
        else {
            printf("c is largest");
        }
    }
    else {
        if(b>c){
            printf("b is largest");
        }
        else {
            printf("c is largest");
        }
    }
}