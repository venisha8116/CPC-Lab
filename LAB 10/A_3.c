// 3.  Find whether the given number is prime or not. 

#include<stdio.h>
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime");
    }
    else
    {
        i = 2;
        while (i < n)
        {   
            // if we find a factor, terminate the program.
            if (n % i == 0)
            {
                printf("Not Prime");
                return 0;
            }
            i++;
        }

        printf("Prime");
    }

    return 0;
}