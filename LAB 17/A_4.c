// 4. Swap value of two numbers using pointer.

#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}