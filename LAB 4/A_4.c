// 4. Print average of three numbers. (with & without scanf)  

#include<stdio.h>
#include<math.h>

int main(){
    // with scanf()
    float a,b,c;
    printf("Enter a, b, c : ");
    scanf("%f %f %f",&a,&b,&c);
    printf("Average of %f, %f, %f = %.2f\n",a, b, c, (a+b+c)/3.0);

    // Without scanf()
    float d = 10.4, e = 10.9, f = 20.6;
    printf("Average of %f, %f, %f = %.2f\n", d, e, f, (d+e+f)/3.0);

    // some math.h functions to use while rounding decimal values of floating-point integers.
    d = round(d);
    e = ceil(e);
    f = floor(f);

    printf("Average of %f, %f, %f = %.2f (rounded values)\n\n", d, e, f, (d+e+f)/3.0);

    // Scenario 1: Sum is perfectly divisible by 3
    int x1 = 3, y1 = 4, z1 = 5; 
    int sum1 = x1 + y1 + z1; // 3 + 4 + 5 = 12
    
    printf("--- Case 1: Perfectly Divisible ---\n");
    printf("Sum: %d\n", sum1);
    printf("Integer Division (sum1 / 3)   : %d\n\n", sum1 / 3); // Output: 4

    // Scenario 2: Sum is NOT perfectly divisible by 3
    int x2 = 5, y2 = 5, z2 = 4;
    int sum2 = x2 + y2 + z2; // 5 + 5 + 4 = 14
    
    printf("--- Case 2: NOT Perfectly Divisible ---\n");
    printf("Sum: %d\n", sum2);
    // 14 / 3 mathematically is 4.666..., but C cuts off the decimals hence there is loss of data.
    printf("Integer Truncation (sum2 / 3) : %d\n", sum2 / 3); // Output: 4
    printf("Correct Float Division (sum2 / 3.0): %.2f\n", sum2 / 3.0); // Output: 4.67

    return 0;
}