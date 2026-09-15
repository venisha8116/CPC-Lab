// 1
// 01
// 010
// 1010
// 10101

#include <stdio.h>

int main()
{
    int i, j;
    int n = 1;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", n);

            if (n == 1)
                n = 0;
            else
                n = 1;
        }

        printf("\n");
    }

    return 0;
}