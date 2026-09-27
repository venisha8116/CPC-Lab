// 2. Sort array using pointers.

#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("Array after sorting:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}