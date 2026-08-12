// 1. Print “Hello World” without using ‘;’ symbol. 

// An if statement evaluates the expression inside its parentheses to determine if it is true or false. In C, any non-zero integer is treated as true, while 0 is treated as false.
// The compiler encounters if (printf("Hello World\n")). To evaluate the condition, it must execute the printf statement first.
// "Hello World" is printed to the terminal.
// printf returns 12. The statement becomes if (12).
// Since 12 is non-zero, the condition evaluates to true. The program enters the empty body of the if statement and exits normally.

#include<stdio.h>
void main(){
    if(printf("hello world")){}
}