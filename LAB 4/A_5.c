// 5. Print area of circle. (pie*r*r) 

#include <stdio.h>

// Defining PI as a constant value
#define PI 3.14159

int main(void) {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f units sq.", area);

    return 0;
}
