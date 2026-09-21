// 5. Input a string in character array and print string and length of string.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100], length=0;
    printf("Enter string:");
    // gets(str);
    scanf("%s", &str);

    // printf("Length of string \"%s\" is %d\n",str, strlen(str));

    for(int i=0; str[i]!='\0';i++){
        length++;
    }
    printf("Length of string \"%s\" is %d\n",str, length);
}