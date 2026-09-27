#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = a;

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}