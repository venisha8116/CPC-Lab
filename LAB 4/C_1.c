// 1. Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000 seconds = 02:46:40)] 

#include<stdio.h>
int main(){
    int SS,HH,MM;
    printf("enter your seconds:");
    scanf("%d",&SS);
    
    HH=SS/3600;
    SS=SS-HH*3600;
    MM=SS/60;
    SS=SS-MM*60;

    printf("%d:%d:%d",HH,MM,SS);

    return 0;
}