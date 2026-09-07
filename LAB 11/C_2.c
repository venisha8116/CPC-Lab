// 2. Calculate x^y without using power function and without using multiplication. 

#include <stdio.h>

int main()
{
    int x, y, i, j;
    int result = 1;
    int temp;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    for (i = 1; i <= y; i++)
    {
        temp = 0;

        // Multiply result by x using addition
        for (j = 1; j <= x; j++)
        {
            temp = temp + result;
        }

        result = temp;
    }

    printf("%d^%d = %d", x, y, result);

    return 0;
}
