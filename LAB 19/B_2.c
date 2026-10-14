// 2.  Scan a character string passed as an argument and convert all lowercase string to uppercase string.

#include <stdio.h>

void ToggleCaseToUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Toggled string : %s", str);
}

int main(){
    char str[100];
    printf("Enter string : ");
    scanf("%[^\n]", &str);

    ToggleCaseToUpper(str);
}