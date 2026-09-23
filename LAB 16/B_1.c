// 1.  Print Transpose of a matrix.

#include <stdio.h>
int main()
{
    int rows, columns, i, j;

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
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}