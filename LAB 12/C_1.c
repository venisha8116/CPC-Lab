// 1. 
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include <stdio.h>

int main()
{
    int n, i, j, k;
    int fact1, fact2, fact3, value;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            fact1 = 1;
            fact2 = 1;
            fact3 = 1;

            // factorial i
            for (k = 1; k <= i; k++)
                fact1 = fact1 * k;

            // factorial j
            for (k = 1; k <= j; k++)
                fact2 = fact2 * k;

            // factorial k
            for (k = 1; k <= i - j; k++)
                fact3 = fact3 * k;

            // the next value in the pascal triangle
            value = fact1 / (fact2 * fact3);

            printf("%d ", value);
        }

        printf("\n");
    }

    return 0;
}