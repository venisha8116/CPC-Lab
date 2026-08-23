// 1. Print all uppercase and lowercase alphabets

#include <stdio.h>

int main()
{
    char letter = 'A';

    printf("Uppercase alphabets:\n");
    while(letter <= 'Z')
    {
        printf("%c ", letter);
        letter++;
    }

    letter = 'a';
    printf("\nLowercase alphabets:\n");
    while(letter <= 'z')
    {
        printf("%c ", letter);
        letter++;
    }

    return 0;
}
