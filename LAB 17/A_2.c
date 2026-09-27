// 2. Demonstrate int, float, double and char pointer.

#include <stdio.h>

int main()
{
    int a = 10;
    float b = 20.5;
    double c = 30.55;
    char d = 'A';

    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;
    char *p4 = &d;

    printf("Integer value = %d\n", *p1);
    printf("Float value = %f\n", *p2);
    printf("Double value = %lf\n", *p3);
    printf("Character value = %c\n", *p4);

    printf("\nAddresses:\n");

    printf("Address of a = %p\n", (void *)p1);
    printf("Address of b = %p\n", (void *)p2);
    printf("Address of c = %p\n", (void *)p3);
    printf("Address of d = %p\n", (void *)p4);

    return 0;
}