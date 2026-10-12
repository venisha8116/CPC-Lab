#include <stdio.h>

void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swapValue(a, b);
    printf("After call by value: %d %d\n", a, b);

    swapReference(&a, &b);
    printf("After call by reference: %d %d\n", a, b);

    return 0;
}