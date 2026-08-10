// 2. Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]

#include<stdio.h>
int main(){
    int weeks,days,years,temp;
    printf("enter your days:");
    scanf("%d",&days);

    temp=days;
    years=temp/365;
    days=temp-years*365;
    weeks=days/7;
    days=days-weeks*7;

    printf("%d days means %d years, %d weeks and %d days",temp,years,weeks,days);

    return 0;
}