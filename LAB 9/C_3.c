// 3. Outputs of the given while-loop programs

#include <stdio.h>

int main()
{
    int a = 25;

    while(a <= 27)
    {
        printf("%d ", a);
        a++;
    }

    printf("\nThe second program produces no output because while(0) is never executed.");

    return 0;
}
