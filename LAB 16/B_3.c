// 3.  Read a matrix and print diagonal elements and its sum.

#include <stdio.h>
int main()
{
    int rows, columns, i, j, sum = 0;

    printf("Enter the order of your matrix:");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Trace of given matrix : %d", sum);
}