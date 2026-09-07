// 3.  Print all ASCII character with their values. 

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i <= 127; i++)
    {
        printf("%d = %c\n", i, i);
    }

    return 0;
}