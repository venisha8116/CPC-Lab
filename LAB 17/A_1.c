// 1. Print value and address of a variable

#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);

    printf("Address of a = ");
    printf("%p\n", (void *)p);

    return 0;
}