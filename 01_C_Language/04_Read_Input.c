#include <stdio.h>

int main() {

    int num1;
    char ch;


    printf("Enter an integer: ");
    scanf("%d", &num1);              // read an integer from user input

    // Buffer clearing to avoid reading newline character left in the input buffer
    // or use getchar() here to consume the newline character
    printf("Enter a character: ");
    scanf(" %c", &ch);                // read a character from user input 

    printf("You entered Integer Value of: %d\n", num1); // print the entered integer
    printf("You entered Character Value of: %c\n", ch);     // print the entered character
    return 0;

}