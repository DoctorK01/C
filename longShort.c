#include <stdio.h>
#include <limits.h> // For integer range constants
#include <float.h>  // For floating-point range constants

int main() {
    // --- Data Types, Ranges, and Sizes ---
    // This section demonstrates the memory size and value range of various C data types.
    printf("--- Data Types, Ranges, and Sizes ---\n");
    
    // Signed Integers
    printf("Range of signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Size of signed int: %zu bytes\n", sizeof(int));
    
    // Unsigned Integers
    printf("Range of unsigned int: %u to %u\n", 0, UINT_MAX);
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    
    // Short Integers
    printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    
    // Long Integers
    printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Size of long int: %zu bytes\n", sizeof(long int));

    // Long Long Integers
    printf("Range of long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));

    // Character Types
    printf("Range of signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Size of char: %zu byte\n", sizeof(char));

    // Floating-Point Types
    printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Size of float: %zu bytes\n", sizeof(float));
    
    printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Size of double: %zu bytes\n", sizeof(double));
    
    // Long Double (may not be supported on all systems)
    // printf("Range of long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
    // printf("Size of long double: %zu bytes\n", sizeof(long double));

    printf("\n");

    return 0;
}

/*
 * --- C FORMAT SPECIFIERS REFERENCE ---
 *
 * Specifier | Used for
 * -----------------------------------------------------------------------------
 * %d, %i    | Signed decimal integer (int)
 * %u        | Unsigned decimal integer (unsigned int)
 * %o        | Unsigned octal
 * %x, %X    | Unsigned hexadecimal integer (lowercase and uppercase letters)
 * %ld       | Signed decimal long integer (long int)
 * %lu       | Unsigned decimal long integer (unsigned long int)
 * %lld      | Signed decimal long long integer (long long int)
 * %llu      | Unsigned decimal long long integer (unsigned long long int)
 * %f        | Floating-point decimal (float, double)
 * %e, %E    | Floating-point in scientific notation (e.g., 1.234e+02)
 * %g, %G    | Uses %f or %e depending on value
 * %c        | Single character (char)
 * %s        | String of characters
 * %p        | Pointer address
 * %zu       | Unsigned integer type for size (size_t), used with sizeof()
 * %%        | Prints a literal % character
 *
 * MODIFIERS:
 * h         | Used with %d, %i, %u for short int and unsigned short int (e.g., %hd)
 * l         | Used with %d, %i, %u for long int and unsigned long int (e.g., %ld)
 * ll        | Used with %d, %i, %u for long long int (e.g., %lld)
 * L         | Used with %f, %e, %g for long double (e.g., %Lf)
 */
