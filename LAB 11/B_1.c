// 1.  Print the Fibonacci Series. 

#include <stdio.h>

int main()
{
    int i, n;
    int a = 0, b = 1, sum;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, ......
    // (nth term is sum of (n-2)th and (n-1)th terms)
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a); // Printing the current term (nth term)

        sum = a + b; // Calculating the next term (n+1)th term
        a = b; // Moving a to the next term -> the next term now becomes the current term 
        b = sum; // Moving b to the new term -> the new term becomes the next term
    }

    return 0;
}