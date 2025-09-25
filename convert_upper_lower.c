#include <stdio.h>
#include <ctype.h>

// Function to convert to uppercase
char toUpperCase(char c) {
    return toupper(c);
}

// Function to convert to lowercase
char toLowerCase(char c) {
    return tolower(c);
}

int main() {
    char (*caseConverter)(char); // Function pointer
    char ch;
    int choice;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Choose an operation:\n");
    printf("1. Convert to Uppercase\n");
    printf("2. Convert to Lowercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Assign the appropriate function to the function pointer
    if (choice == 1) {
        caseConverter = toUpperCase;
    } else if (choice == 2) {
        caseConverter = toLowerCase;
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Call the function using the pointer
    char result = caseConverter(ch);
    printf("Converted character: %c\n", result);

    return 0;
}
