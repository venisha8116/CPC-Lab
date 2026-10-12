#include <stdio.h>

int maximum(int a, int b)
{
    return a>b ? a : b;
}

int minimum(int a, int b)
{
    return a<b ? a : b;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum = %d\n", maximum(a, b));
    printf("Minimum = %d\n", minimum(a, b));

    return 0;
}