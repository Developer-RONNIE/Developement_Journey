#include <stdio.h>

int main(){

    // **Operators** are symbols used to perform operations on variables and values.
    // The values and variables used with operators are called **operands**.

    // A **unary operator** requires only one operand to perform its operation (like a++), whereas a **binary operator** requires exactly two operands (like a + b).

    // TYPES OF OPERATORS IN C:

    // 1. Arithmetic Operators

    // a. basic arithmetic operators include addition (+), subtraction (-), multiplication (*), division (/), and modulus (%). These operators are used to perform mathematical operations on numeric values.
    int a = 10, b = 5;
    printf("Arithmetic Operators:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);   // / is the division operator, which gives the quotient of a division operation.
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);  // % is the modulus operator, which gives the remainder of a division operation.

    // b. Increment (++) and Decrement (--) Operators: These operators are used to increase or decrease the value of a variable by 1, respectively.
    int c = 10;
    printf("Increment and Decrement Operators:\n");
    printf("Original value of c: %d\n", c);
    printf("Post-increment: c++ = %d\n", c++); // Post-increment: returns the value before incrementing
    printf("Pre-increment: ++c = %d\n", ++c); // Pre-increment: increments the value before returning it
    printf("Post-decrement: c-- = %d\n", c--); // Post-decrement: returns the value before decrementing
    printf("Pre-decrement: --c = %d\n", --c); // Pre-decrement: decrements the value before returning it

    // 2. Relational Operators

    // Relational operators are used to compare two values. They return a boolean value (true or false) based on the comparison.

    int x = 10, y = 20;
    printf("Relational Operators:\n");
    printf("%d > %d: %d\n", x, y, x > y);   // Greater than
    printf("%d < %d: %d\n", x, y, x < y);   // Less than
    printf("%d >= %d: %d\n", x, y, x >= y); // Greater than or equal to
    printf("%d <= %d: %d\n", x, y, x <= y); // Less than or equal to
    printf("%d == %d: %d\n", x, y, x == y); // Equal to
    printf("%d != %d: %d\n", x, y, x != y); // Not equal to

    // 3. Logical Operators

    // Logical operators are used to combine multiple conditions or expressions. They return a boolean value (true or false) based on the logical relationship between the operands.
    /* 
    * IMPORTANT C RULE FOR INTERVIEWS: 
    * Any non-zero number (like 10 or 20) is considered 'True'. 
    * Only '0' is considered 'False'.
    */
    int p = 10, q = 20;
    printf("Logical Operators:\n");
    printf("Logical AND: %d && %d: %d\n", p, q, p && q); // && checks if BOTH operands are True (non-zero). Here, 10 and 20 are True, so it yields 1.
    printf("Logical OR: %d || %d: %d\n", p, q, p || q); // || checks if AT LEAST ONE operand is True. Both are True, so it yields 1.
    printf("Logical NOT: !%d: %d\n", p, !p);            // ! inverts the condition. p is 10 (True), so !p becomes False (0).

    // 4. Assignment Operators

    // Assignment operators are used to assign values to variables. The most common assignment operator is the equal sign (=), which assigns the value on the right to the variable on the left.
    int r = 10; // Assigns the value 10 to variable r
    printf("Assignment Operators:\n");
    printf("Simple Assignment: r = %d\n", r);
    r += 5; // Equivalent to r = r + 5
    printf("Addition Assignment: r += 5; r = %d\n", r);
    r -= 3; // Equivalent to r = r - 3
    printf("Subtraction Assignment: r -= 3; r = %d\n", r);
    r *= 2; // Equivalent to r = r * 2
    printf("Multiplication Assignment: r *= 2; r = %d\n", r);
    r /= 4; // Equivalent to r = r / 4
    printf("Division Assignment: r /= 4; r = %d\n", r);
    r %= 3; // Equivalent to r = r % 3
    printf("Modulus Assignment: r %%= 3; r = %d\n", r);

    // 5. sizeof Operator

    // The sizeof operator is used to determine the size (in bytes) of a data type or variable. It returns the size as an unsigned integer value.
    printf("Sizeof Operator:\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));

    // 6. Bitwise Operators

    // Bitwise operators are used to perform operations on individual bits of integer values. They operate at the binary level and can be used for tasks like setting, clearing, or toggling specific bits in a number.

    int s = 5;  // Binary: 0101
    int t = 3;  // Binary: 0011
    printf("Bitwise Operators:\n");
    printf("Bitwise AND: %d & %d = %d\n", s, t, s & t); // & is the bitwise AND operator, which performs a logical AND operation on each pair of corresponding bits in the binary representation of the operands.
    printf("Bitwise OR: %d | %d = %d\n", s, t, s | t); // | is the bitwise OR operator, which performs a logical OR operation on each pair of corresponding bits in the binary representation of the operands.
    printf("Bitwise XOR: %d ^ %d = %d\n", s, t, s ^ t); // ^ is the bitwise XOR operator, which performs a logical XOR operation on each pair of corresponding bits in the binary representation of the operands.
    printf("Left Shift: %d << 1 = %d\n", s, s << 1); // << is the left shift operator, which shifts the bits of the left operand to the left by the number of positions specified by the right operand. Each left shift effectively multiplies the number by 2.
    printf("Right Shift: %d >> 1 = %d\n", s, s >> 1); // >> is the right shift operator, which shifts the bits of the left operand to the right by the number of positions specified by the right operand. Each right shift effectively divides the number by 2.

    // 7. Conditional (Ternary) Operator

    // The conditional operator (?:) is a shorthand way of writing an if-else statement. It takes three operands: a condition, a value to return if the condition is true, and a value to return if the condition is false.
    int u = 10, v = 20;
    int max = (u > v) ? u : v; // If u is greater than v, max is assigned the value of u; otherwise, max is assigned the value of v.
    printf("Conditional (Ternary) Operator: max = %d\n", max);


    // 8. Comma Operator

    // The comma operator (,) is used to separate multiple expressions in a single statement. It evaluates each expression from left to right and returns the value of the last expression.
    int w = (1, 2, 3); // The value of w will be 3, as it is the last expression evaluated.
    printf("Comma Operator: w = %d\n", w);

    return 0; 
}