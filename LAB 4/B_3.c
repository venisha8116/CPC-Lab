// 3. Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)

#include <stdio.h>

int main(void) {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ((fahrenheit - 32.0) * 5.0) / 9.0;

    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
