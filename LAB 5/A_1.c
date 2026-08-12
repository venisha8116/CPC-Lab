// 1. Print given feet into inches. (inches = feet*12)

#include<stdio.h>
int main(){
    float feet;
    printf("Enter measurement in feet : ");
    scanf("%f",&feet);
    if(feet>=0){
        printf("Measurement in inches = %f inches", feet*12);
    }
    else {
        printf("Invalid Input.");
    }

    return 0;
}
