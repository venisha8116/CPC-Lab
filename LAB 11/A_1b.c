// 1 - B.  Print 1 to 10 then modify program print 1 to n. 

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);

    // Printing 1 to n
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}