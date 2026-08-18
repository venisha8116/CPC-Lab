//2. Check whether character is alphabet or not using conditional operator

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check whether character lies between A-Z or a-z
    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
        ? printf("Alphabet")
        : printf("Not an alphabet");

    return 0;
}