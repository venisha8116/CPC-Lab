// 1.  Read values in two-dimensional array and print them in matrix form.

#include <stdio.h>
int main()
{
    int rows, columns, i, j;

    printf("Enter the order of your matrix:");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter element for row-%d and col-%d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}