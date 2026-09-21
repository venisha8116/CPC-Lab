// 3. Count number of elements divisible by 3 in array. 

#include<stdio.h>
int main(){
    int size,count=0,i;

    printf("How many numbers do you want to check?:");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++){
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++){
        if(arr[i]%3==0){
            count++;
        }
    }

    printf("Total numbers divisible by 3 = %d",count);
}