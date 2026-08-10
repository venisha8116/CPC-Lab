// 1. Print area of triangle. ((height*base)/2) 

#include <stdio.h>

int main(void) {
    float base, height, area;

    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);

    area = (base * height) / 2.0;

    printf("Area of the triangle = %.2f units sq.\n", area);

    return 0;
}
