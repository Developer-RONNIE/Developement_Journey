#include <stdio.h>


int main() {

    // single line comment 
    /* Multi-line comment */


    printf ("Hello World"); // print Hello World to the console

    // Format Specifiers & Escape Sequences in C

    //Escape Sequences in C 
    printf("\nNew Line\n");              // \n is a new line escape sequence
    printf("\tTab Space\n");             // \t is a tab space escape sequence
    printf("Backspace: \b\n");           // \b is a backspace escape sequence
    printf("Backslash: \\\n");           // \\ is a backslash escape sequence
    printf("Double Quote: \"\n");        // \" is a double quote escape sequence
    printf("Single Quote: \'\n");        // \' is a single quote escape sequence
    printf("Question Mark: \?\n");       // \? is a question mark escape sequence
    printf("Carriage Return: \r\n");     // \r is a carriage return escape sequence
    printf("Form Feed: \f\n");           // \f is a form feed escape sequence
    printf("Alert (Bell): \a\n");        // \a is an alert (bell) escape sequence
    printf("Vertical Tab: \v\n");        // \v is a vertical tab escape sequence
    printf("Octal: \101\n");             // \101 is an octal escape sequence (A)
    printf("Hexadecimal: \x41\n");        // \x41 is a hexadecimal escape sequence (A)
    printf("Null Character: \0\n");       // \0 is a null character escape sequence

    // Format Specifiers in C
    printf("Percent Sign: %%\n");        // %% is a percent sign format specifier
    return 0;
}