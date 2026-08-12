// 2. Determine the roots of the equation ax2+bx+c=0.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;
    float realPart, imaginaryPart;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant: b² - 4ac
    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // Two equal real roots
        root1 = -b / (2 * a);

        printf("Both roots are equal.\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}