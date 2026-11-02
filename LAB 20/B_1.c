// 1. Copy a one string’s value in another string using a string pointer. 

#include<stdio.h>
void copyString(char *src, char *dest) {
    while(*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() {
    char src[100], dest[100];
    printf("Enter a string: ");
    scanf("%[^\n]", src);

    copyString(src, dest);
    printf("Copied string: %s\n", dest);

    return 0;
}