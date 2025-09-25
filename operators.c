#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int result;

    printf("Initial values: a = %d, b = %d\n", a, b);
    printf("----------------------------------\n\n");

    // --- ARITHMETIC OPERATORS (LEFT to RIGHT) ---
    // These operators perform mathematical calculations.
    printf("--- Arithmetic Operators ---\n");
    printf("a + b = %d\n", a + b); // ADDITION: Adds two operands.
    printf("a - b = %d\n", a - b); // SUBTRACTION: Subtracts the second operand from the first.
    printf("a * b = %d\n", a * b); // MULTIPLICATION: Multiplies two operands.
    printf("a / b = %d\n", a / b); // DIVISION: Divides the first operand by the second.
    printf("a %% b = %d\n", a % b); // MODULUS: Returns the remainder of an integer division.
    printf("\n");

    // --- ASSIGNMENT OPERATORS (RIGHT to LEFT) ---
    // These operators assign a value to a variable.
    printf("--- Assignment Operators ---\n");
    a = b;
    printf("a = b: a is now %d\n", a); // SIMPLE ASSIGNMENT: Assigns the value of b to a.

    a = 10; // Reset a for further examples
    a += b;
    printf("a += b: a is now %d\n", a); // ADDITION ASSIGNMENT: a = a + b
    
    a = 10; // Reset a
    a -= b;
    printf("a -= b: a is now %d\n", a); // SUBTRACTION ASSIGNMENT: a = a - b

    a = 10; // Reset a
    a *= b;
    printf("a *= b: a is now %d\n", a); // MULTIPLICATION ASSIGNMENT: a = a * b
    
    a = 10; // Reset a
    a /= b;
    printf("a /= b: a is now %d\n", a); // DIVISION ASSIGNMENT: a = a / b
    
    a = 10; // Reset a
    a %= b;
    printf("a %%= b: a is now %d\n", a); // MODULUS ASSIGNMENT: a = a % b
    printf("\n");

    // --- UNARY OPERATORS (RIGHT to LEFT) ---
    // These operators work on a single operand.
    printf("--- Unary Operators ---\n");
    int c = 5;
    printf("Initial value of c: %d\n", c);
    
    printf("c++: %d (post-increment, c becomes %d)\n", c++, c); // POST-INCREMENT: Use current value, then increment by 1.
    c = 5; // Reset c
    printf("++c: %d (pre-increment, c becomes %d)\n", ++c, c); // PRE-INCREMENT: Increment by 1, then use new value.

    c = 5; // Reset c
    printf("c--: %d (post-decrement, c becomes %d)\n", c--, c); // POST-DECREMENT: Use current value, then decrement by 1.
    c = 5; // Reset c
    printf("--c: %d (pre-decrement, c becomes %d)\n", --c, c); // PRE-DECREMENT: Decrement by 1, then use new value.

    printf("+a: %d\n", +a); // POSITIVE: A positive value. Has no effect on a positive number.
    printf("-a: %d\n", -a); // NEGATIVE: Converts a positive value to a negative.
    printf("! (a > 5): %d\n", !(a > 5)); // LOGICAL NOT: Inverts a boolean condition.
    printf("~a: %d\n", ~a); // BITWISE NOT: Inverts all the bits of an integer.
    printf("\n");

    // --- RELATIONAL OPERATORS (LEFT to RIGHT) ---
    // These operators compare two operands and return a boolean (1 for true, 0 for false).
    printf("--- Relational Operators ---\n");
    printf("a == b: %d\n", a == b); // EQUAL TO: Returns true if a equals b.
    printf("a != b: %d\n", a != b); // NOT EQUAL TO: Returns true if a is not equal to b.
    printf("a > b: %d\n", a > b); // GREATER THAN: Returns true if a is greater than b.
    printf("a < b: %d\n", a < b); // LESS THAN: Returns true if a is less than b.
    printf("a >= b: %d\n", a >= b); // GREATER THAN OR EQUAL TO: Returns true if a is greater than or equal to b.
    printf("a <= b: %d\n", a <= b); // LESS THAN OR EQUAL TO: Returns true if a is less than or equal to b.
    printf("\n");

    // --- LOGICAL OPERATORS (LEFT to RIGHT) ---
    // These operators combine two or more conditions.
    printf("--- Logical Operators ---\n");
    printf("(a > 5 && b < 5): %d\n", (a > 5 && b < 5)); // LOGICAL AND: True if both conditions are true.
    printf("(a > 15 || b < 5): %d\n", (a > 15 || b < 5)); // LOGICAL OR: True if at least one condition is true.
    printf("\n");
    
    // --- BITWISE OPERATORS (LEFT to RIGHT) ---
    // These operators work on individual bits of integer data.
    printf("--- Bitwise Operators ---\n");
    int x = 5; // Binary 0101
    int y = 3; // Binary 0011
    printf("x = %d (binary 0101), y = %d (binary 0011)\n", x, y);
    printf("x & y = %d\n", x & y); // BITWISE AND: Result is 1 if both bits are 1.
    printf("x | y = %d\n", x | y); // BITWISE OR: Result is 1 if at least one bit is 1.
    printf("x ^ y = %d\n", x ^ y); // BITWISE XOR: Result is 1 if bits are different.
    printf("~x = %d\n", ~x); // BITWISE NOT: Inverts all bits.
    printf("\n");

    // --- SHIFT OPERATORS (LEFT to RIGHT) ---
    // These operators shift bits to the left or right.
    printf("--- Shift Operators ---\n");
    printf("a << b (10 << 3): %d\n", a << b); // LEFT SHIFT: Shifts bits to the left, equivalent to multiplying by 2^b.
    printf("a >> b (10 >> 3): %d\n", a >> b); // RIGHT SHIFT: Shifts bits to the right, equivalent to dividing by 2^b.
    printf("\n");

    // --- TERNARY OPERATOR (RIGHT to LEFT) ---
    // This is a shorthand for an if-else statement.
    printf("--- Ternary Operator ---\n");
    result = (a > b) ? a : b;
    printf("Result of (a > b) ? a : b is %d\n", result);
    printf("This means the larger number is %d.\n\n", result);

    return 0;
}
