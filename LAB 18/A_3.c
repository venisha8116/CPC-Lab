// 3.  Count simple interest using function.

#include<stdio.h>

double simple_interest(double principal, double rate, int time){
    return (principal * rate * time) / 100;
}

int main(){
    double principal, rate;
    int time;

    printf("Enter principal, rate and time (in years): ");
    scanf("%lf %lf %d", &principal, &rate, &time);

    double interest = simple_interest(principal, rate, time);

    printf("Simple Interest for principal %.2f at rate %.2f for time %d is %.2f\n", principal, rate, time, interest);
}