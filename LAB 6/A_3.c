// 3. Check whether the entered character is upper case, lower case, digit or any special character.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    /*
        ASCII values:

        A = 65 to Z = 90   -> Uppercase
        a = 97 to z = 122  -> Lowercase
        0 = 48 to 9 = 57   -> Digits

        Anything outside these ranges is a special character.
    */

    // Character Comparison Approach : if(ch>='A' && ch<='Z')
    if (ch >= 65 && ch <= 90) { // ASCII Comparison Approach
        printf("Uppercase character");
    }
    // Character Comparison Approach : if(ch>='a' && ch<='z')
    else if (ch >= 97 && ch <= 122) { // ASCII Comparison Approach
        printf("Lowercase character");
    }
    // Character Comparison Approach : if(ch>='0' && ch<='9')
    else if (ch >= 48 && ch <= 57) { // ASCII Comparison Approach
        printf("Digit");
    }
    else {
        printf("Special character");
    }

    return 0;
}