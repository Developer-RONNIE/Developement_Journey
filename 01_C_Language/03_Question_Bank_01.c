#include <stdio.h>


int main() {
    

    /* 
    QUESTION 1: Sum of two Integers
    Take two integers  a & b with some constant values. Print their sum.
    */

    int a = 5, b = 10;
    int sum = a + b;

    printf("Sum of %d and %d is: %d\n", a,b,sum);


    /* 
    QUESTION 2: Arithmetic Operations
    Take two integers  num1 & num2  with some constant values. Perform arithmetic operations (+, -, *, /) and print  with the appropriate message.
    */

    int num1 = 20, num2 = 4;
    printf("Sum of %d and %d is:%d\n", num1, num2, (num1 + num2));
    printf("Difference of %d and %d is:%d\n", num1, num2, (num1 - num2));
    printf("Product of %d and %d is:%d\n", num1, num2, (num1 * num2));
    printf("Division of %d and %d is:%d\n", num1, num2, (num1 / num2));

    return 0;
}