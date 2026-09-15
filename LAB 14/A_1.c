// 1.  Read n numbers from user and print in normal and reverse order. 

#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Normal order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nReverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}