// 4.  Find a character from given string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    
    printf("Enter string : ");
    scanf("%[^\n]", str);

    char target;
    printf("Enter the character you want to search : ");
    scanf(" %c", &target);

    char *result = strchr(str, target);

    if(result == NULL){
        printf("Character not found");
    }
    else {
        printf("Character %c found at index %d in string \"%s\"", target, result - str, str);
    }
}