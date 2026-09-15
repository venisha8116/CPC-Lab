// 5.  Read five person height and weight and count the number of person having height greater than 170 and 
// weight less than 50. 

#include <stdio.h>

int main()
{
    int height[5], weight[5];
    int i, count = 0;

    printf("Enter height and weight of 5 persons:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Person %d: ", i + 1);
        scanf("%d %d", &height[i], &weight[i]);

        if (height[i] > 170 && weight[i] < 50)
            count++;
    }

    printf("Number of persons = %d\n", count);

    return 0;
}
