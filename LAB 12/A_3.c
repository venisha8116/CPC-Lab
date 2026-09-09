// 3. 5
//    54
//    543
//    5432
//    54321

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= n - i + 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}