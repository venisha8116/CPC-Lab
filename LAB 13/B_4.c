// 1
// AB
// 123
// CDEF
// 12345

#include <stdio.h>

int main()
{
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", ch);
                ch++;
            }
            else
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}