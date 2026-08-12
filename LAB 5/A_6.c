// 6. Check whether given character is vowel or consonant. (Using single if only) 

#include<stdio.h>
int main(){
    char ch;
    printf("Enter your alphabet : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Alphabet %c is a vowel.", ch);
    }
    else {
        printf("Alphabet %c is a consonant.", ch);
    }

    return 0;
}
