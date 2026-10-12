#include <stdio.h>

void fibbo(int n)
{
    int a = 0, b = 1, c, i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibbo(n);

    return 0;
}