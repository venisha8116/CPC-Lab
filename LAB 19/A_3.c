// 3.  Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr() 

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    printf("Enter string 1: ");
    scanf("%[^\n]", &str1);

    char str2[100];
    printf("Enter string 2: ");
    scanf(" %[^\n]", &str2);

    printf("1. Length of string 1 and string 2 : %d %d", strlen(str1), strlen(str2));

    printf("\n2. Compare string 1 and string 2 : %d", strcmp(str1, str2));

    printf("\n3. Copy string 2 to string 1 : %s", strcpy(str1, str2));

    printf("\n4. Concatenate string 2 to string 1 : %s", strcat(str1, str2));

    printf("\n5. Reverse string 1 : %s", strrev(str1));

    printf("\n6. Convert string 1 to lowercase : %s", strlwr(str1));

    printf("\n7. Convert string 1 to uppercase : %s", strupr(str1));
}