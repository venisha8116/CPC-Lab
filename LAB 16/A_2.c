// 2.  Count number of positive, negative and zero elements from 3 X 3 matrix.

#include <stdio.h>
int main()
{
    int rows, columns, i, j, countP = 0, countN = 0, countZ = 0;

    printf("Enter the order of your matrix:");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (arr[i][j] == 0)
            {
                countZ++;
            }
            else if (arr[i][j] > 0)
            {
                countP++;
            }
            else
            {
                countN++;
            }
        }
    }
    printf("No. of positive elements =% d\nNo. of negative elements = %d\nNo. of zeroes = %d\n", countP, countN, countZ);
}
