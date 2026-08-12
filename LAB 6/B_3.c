// 3. Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is
//    isosceles, equilateral, scalene or right-angled triangle.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // First check whether the sides can form a valid triangle
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {

        printf("Invalid triangle.");
    }

    // All three sides are equal
    else if (a == b && b == c) {
        printf("Equilateral triangle.");
    }

    // Any two sides are equal
    else if (a == b || b == c || a == c) {
        printf("Isosceles triangle.");
    }

    // Check Pythagorean theorem for right-angled triangle
    else if ((a * a + b * b == c * c) ||
             (a * a + c * c == b * b) ||
             (b * b + c * c == a * a)) {

        printf("Right-angled triangle.");
    }

    // All sides are different
    else {
        printf("Scalene triangle.");
    }

    return 0;
}