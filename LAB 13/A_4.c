// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}