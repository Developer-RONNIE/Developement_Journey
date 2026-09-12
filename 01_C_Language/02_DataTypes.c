#include <stdio.h>


int main() {

    // Primitive data types in C
    int num = 12;                                                        // integer data type
    short int smallNum = 32000;                                          // short integer data type
    long bigNum = 1234567890;                                            // long data type
    long long veryBigNum = 1234567890123456789;                          // long long data type
    unsigned int unsignedNum = 300;                                      // unsigned integer data type
    unsigned long unsignedBigNum = 4000000000UL;                         // unsigned long data type
    unsigned long long unsignedVeryBigNum = 12345678901234567890ULL;     // unsigned long long data type
    char letter = 'A';                                                   // character data type
    float decimal = 3.14;                                                // float data type
    double largeDecimal = 3.141592653589793;                             // double data type
    void *ptr = &num;                                                    // void pointer data type

    // print the values of data types with format specifiers
    printf("Integer: %d\n", num);                     // %d is a specifier for integer
    printf("Long: %ld\n", bigNum);                    // %ld is a specifier for long
    printf("Long Long: %lld\n", veryBigNum);          // %lld is a specifier for long long
    printf("Unsigned Integer: %u\n", unsignedNum);     // %u is a specifier for unsigned integer
    printf("Unsigned Long: %lu\n", unsignedBigNum);    // %lu is a specifier for unsigned long
    printf("Unsigned Long Long: %llu\n", unsignedVeryBigNum); // %llu is a specifier for unsigned long long
    printf("Character: %c\n", letter);                // %c is a specifier for character
    printf("Float: %f\n", decimal);                   // %f is a specifier for float
    printf("Double: %lf\n", largeDecimal);            // %lf is a specifier for double
    printf("Void Pointer: %p\n", ptr);                // %p is a specifier for void pointer

    //Exercises : 
    int a = 1;
    int a1 = -1;
    int b = 12;
    int c = 123;
    int d = 1234;

    // Exercise 1: Print the values of a, b, c, and d using format specifiers
    printf("\n%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);

    // Exercise 2: Print the values of a, b, c, and d using format specifiers with width
    printf("\n%4d\n", a);
    printf("%4d\n", b);
    printf("%4d\n", c);
    printf("%4d\n", d);

    // Exercise 3: Print the values of a, b, c, and d using format specifiers with width and leading zeros
    printf("\n%04d\n", a);
    printf("%04d\n", b);
    printf("%04d\n", c);
    printf("%04d\n", d);

    // Exercise 4: Print the values of a, b, c, and d using format specifiers with
    printf("\n%+d\n", a1);
    printf("%+d\n", b);
    printf("%+d\n", c);
    printf("%+d\n", d);

    return 0;
}