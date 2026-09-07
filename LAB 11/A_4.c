// 4.  Calculate 𝑥𝑦 without using power function.

#include <stdio.h>

int main()
{
    int x, y, i, result = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    // x multiplied by itself y times
    for (i = 1; i <= y; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %d", x, y, result);

    return 0;
}