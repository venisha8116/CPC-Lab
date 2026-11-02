// 2. Using a String pointer remove a space and special character from string.

#include<stdio.h>
void removeSpacesAndSpecialChars(char *str) {
    char *src = str, *dst = str;

    while (*src) {
        if ((*src >= 'A' && *src <= 'Z') || (*src >= 'a' && *src <= 'z') || (*src >= '0' && *src <= '9')) {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    removeSpacesAndSpecialChars(str);
    printf("String after removing spaces and special characters: %s\n", str);

    return 0;
}