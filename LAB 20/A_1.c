// 1. Find weather given string is palindrome or not.

#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]){
    int start = 0;
    int end = strlen(str) - 1;

    while(start < end){
        if(str[start] != str[end]){
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int isPal = isPalindrome(str);

    if(isPal){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}