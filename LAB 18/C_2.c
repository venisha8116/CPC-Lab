// 2. Create a function that converts amount into words. (i.e. 9241: Nine Thousand Two Hundred Forty-One)

#include <stdio.h>

// Helper 1: Prints numbers from 1 to 9
void print_ones(int n) {
    switch (n) {
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

// Helper 2: Prints numbers from 10 to 19
void print_teens(int n) {
    switch (n) {
        case 10: printf("Ten "); break;
        case 11: printf("Eleven "); break;
        case 12: printf("Twelve "); break;
        case 13: printf("Thirteen "); break;
        case 14: printf("Fourteen "); break;
        case 15: printf("Fifteen "); break;
        case 16: printf("Sixteen "); break;
        case 17: printf("Seventeen "); break;
        case 18: printf("Eighteen "); break;
        case 19: printf("Nineteen "); break;
    }
}

// Helper 3: Prints multiples of ten (20 to 90)
void print_tens(int n) {
    switch (n) {
        case 2: printf("Twenty "); break;
        case 3: printf("Thirty "); break;
        case 4: printf("Forty "); break;
        case 5: printf("Fifty "); break;
        case 6: printf("Sixty "); break;
        case 7: printf("Seventy "); break;
        case 8: printf("Eighty "); break;
        case 9: printf("Ninety "); break;
    }
}

void convertToWords(int num) {
    if (num == 0) {
        printf("Zero\n");
        return;
    }

    // 1. Process Thousands (up to 99,000)
    if (num >= 1000) {
        int thousands = num / 1000;
        if (thousands >= 10 && thousands <= 19) {
            print_teens(thousands);
        } else {
            print_tens(thousands / 10);
            print_ones(thousands % 10);
        }
        printf("Thousand ");
        num %= 1000; // Remove thousands layer
    }

    // 2. Process Hundreds
    if (num >= 100) {
        print_ones(num / 100);
        printf("Hundred ");
        num %= 100; // Remove hundreds layer
    }

    // 3. Process Tens and Ones
    if (num > 0) {
        if (num >= 10 && num <= 19) {
            print_teens(num);
        } else {
            print_tens(num / 10);
            print_ones(num % 10);
        }
    }
    printf("\n");
}

int main()
{
    int amount;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    printf("Amount in words: ");
    convertToWords(amount);

    return 0;
}