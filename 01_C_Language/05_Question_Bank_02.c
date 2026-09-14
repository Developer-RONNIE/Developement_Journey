#include <stdio.h>

int main () {

    /*
    1. Sum & message
    Take two integers  a & b from user. Print their sum with message.

    HINT:
    Input : a = 5, b = 7
    Output : The sum of 5 and 7 : 12
    */

    printf("Enter two integers: ");
    int a, b;
    scanf("%d %d", &a, &b); // read two integers from user input
    printf("The sum of %d and %d : %d\n", a, b, a + b); // print the sum with message

    /*
    2. Swap Two Numbers
    Take two integers  x & y  from user and print the values after swap their values.

    HINT:
    Input : x = 10, y = 7
    Output : After swap : x = 7 and y = 10
    */

    printf("Enter two integers: ");
    int x, y;
    scanf("%d %d", &x, &y); // read two integers from user input
    printf("Before swap : x = %d and y = %d\n", x, y); // print the values before swap
    // Swap logic
    int temp = x;
    x = y;
    y = temp;
    printf("After swap : x = %d and y = %d\n", x, y); // print the swapped values

    return 0;
}
