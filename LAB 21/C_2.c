// 2. Add two times hh, mm and ss using structure. 

#include<stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main(){
    struct Time t1, t2, sum;

    printf("Enter first time (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter second time (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    sum.hours = t1.hours + t2.hours;
    sum.minutes = t1.minutes + t2.minutes;
    sum.seconds = t1.seconds + t2.seconds;

    while (sum.seconds >= 60) {
        sum.seconds -= 60;
        sum.minutes++;
    }

    while (sum.minutes >= 60)
    {
        sum.minutes -= 60;
        sum.hours++;
    }
    
    printf("Sum of times: %d hours %d minutes %d seconds\n", sum.hours, sum.minutes, sum.seconds);
}