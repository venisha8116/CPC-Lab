// 2.  Find the sum and average of different numbers which are accepted by user as many as user wants. 

#include<stdio.h>

int main(){
    int num, choice, count;
    float sum, avg;
    
    sum = 0;
    count = 0;
    
    // Accept numbers until user wants to stop
    while(1){
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum + num;
        count = count + 1;
        
        printf("Do you want to continue? (1=yes, 0=no): ");
        scanf("%d", &choice);
        if(choice == 0) break;
    }
    
    avg = sum / count;  // Calculate average
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);
    
    return 0;
}
