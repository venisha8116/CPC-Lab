// 1. Check a given matrix is a sparse matrix or not.

#include <stdio.h>
void main()
{
    int rows, columns, i, j, count = 0;

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
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count > (rows * columns * (0.5)))
    {
        printf("The given matrix is a sparse matrix.");
    }
    else
    {
        printf("The given matrix is not a sparse matrix.");
    }
}