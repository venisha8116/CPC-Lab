#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n, i;
    int *p1, *p2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p1 = a;
    p2 = b;

    for(i = 0; i < n; i++)
    {
        *(p2 + i) = *(p1 + i);
    }

    printf("Second array is:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p2 + i));
    }

    return 0;
}