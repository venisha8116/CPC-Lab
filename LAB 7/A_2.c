// 2. Print number of days in a month using switch

#include <stdio.h>

int main()
{
    int month, year;

    printf("Enter month number and year: ");
    scanf("%d %d", &month, &year);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;

        case 2:
            if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
                printf("29 days");
            else
                printf("28 days");
            break;

        default:
            printf("Invalid month number");
    }

    return 0;
}