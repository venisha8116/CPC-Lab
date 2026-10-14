// 5.  Replace a character in given string.

#include<stdio.h>
#include<string.h>

void replace_all_occurances(char str[], char target, char new){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == target) str[i] = new;
    }
}

void replace_first_occurance(char str[], char target, char new){
    char *existsAt = strchr(str, target);

    if(existsAt == NULL){
        printf("Target not found");
    }
    else {
        *existsAt = new;
    }
}

int main(){
    char str[100];
    printf("Enter string : ");
    scanf("%[^\n]", str);

    char target, changeTo;

    printf("Enter the character you want to replace : ");
    scanf(" %c", &target);

    printf("Enter the character that replaces target : ");
    scanf("%c", &changeTo);

    replace_first_occurance(str, target, changeTo);
    printf("Modified string : %s", str);

    replace_all_occurances(str, target, changeTo);

    printf("Modified string : %s", str);
}