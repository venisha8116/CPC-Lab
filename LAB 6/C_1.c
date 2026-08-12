// 1. Find the second largest number among three user input numbers.

#include <stdio.h>

int main() {
    int a, b, c, secondLargest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    /*
        First, identify the largest number.
        Then the larger of the remaining two numbers
        will be the second largest.
    */

    if (a >= b && a >= c) {
        // a is the largest
        if (b >= c)
            secondLargest = b;
        else
            secondLargest = c;
    }
    else if (b >= a && b >= c) {
        // b is the largest
        if (a >= c)
            secondLargest = a;
        else
            secondLargest = c;
    }
    else {
        // c is the largest
        if (a >= b)
            secondLargest = a;
        else
            secondLargest = b;
    }

    printf("Second largest number = %d", secondLargest);

    return 0;
}