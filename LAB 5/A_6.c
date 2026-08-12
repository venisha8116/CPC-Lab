// 6. Check whether given character is vowel or consonant. (Using single if only) 

#include <stdio.h>

int main() {
    char ch;

    printf("Enter your alphabet: ");
    scanf("%c", &ch);

    /*
        ASCII ranges:

        A = 65 to Z = 90   -> Uppercase alphabet
        a = 97 to z = 122  -> Lowercase alphabet
    */

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {

        /*
            Check whether the alphabet is a vowel.

            Lowercase vowels:
            a = 97, e = 101, i = 105, o = 111, u = 117

            Uppercase vowels:
            A = 65, E = 69, I = 73, O = 79, U = 85
        */

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {

            printf("Alphabet %c is a vowel.", ch);
        }
        else {
            printf("Alphabet %c is a consonant.", ch);
        }
    }
    else {
        printf("%c is not an alphabet.", ch);
    }

    return 0;
}
