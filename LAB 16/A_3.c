// 3.  Read and store the roll no and marks of 20 students using 2D array.

#include <stdio.h>
int main()
{
    int arr[20][2];

    int i, j;

    for (i = 0; i < 20; i++)
    {
        printf("Enter rollno. and marks for record %d : ", i + 1);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    printf("Rollno. and marks of 20 students are:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
}
