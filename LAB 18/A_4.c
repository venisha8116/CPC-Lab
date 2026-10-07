// 4.  Return the maximum of three floating-point numbers.

#include<stdio.h>

float max(float num1, float num2, float num3){
    float maximum = num1;

    if(num2>maximum){
        maximum = num2;
    }
    else if(num3>maximum){
        maximum = num3;
    }

    return maximum;
}

int main(){
    float num1, num2, num3;

    printf("Enter 3 numbers : ");
    scanf("%f %f %f", &num1, &num2, &num3);

    float maximum = max(num1, num2, num3);

    printf("Maximum of %.2f, %.2f and %.2f is %.2f\n", num1, num2, num3, maximum);
}