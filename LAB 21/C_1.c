// 1. Add two distances in feet and inches using structure. 

#include<stdio.h>

struct Distance {
    int feet;
    float inches;
};

int main(){
    struct Distance d1, d2, sum;
    
    printf("Enter first distance (feet inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);

    printf("Enter second distance (feet inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);

    sum.inches = d1.inches + d2.inches;
    sum.feet = d1.feet + d2.feet;

    while(sum.inches >= 12.0) {
        sum.inches -= 12.0;
        sum.feet++;
    }

    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);
}