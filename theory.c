/*1.10 What is a Compiler
• Pre-processing: Processes directives (like #include and #define) before 
compilation, modifying the source code according to these 
instructions.
• Compiling: Transforms source code written in a high-level language 
(like C) into assembly language.
• Assembling: Converts assembly language into machine code, 
generating object files.
• Linking: Combines multiple object files into a single executable or 
library, resolving references between them

An algorithm is a step-by-step procedure for solving a problem or 
performing a task





PROGRAMMING LANGUAGE


What is a Programming Language
• Giving instructions to a 
computer
• Instructions: Tells 
computer what to do.
• These instructions are 
called code.
• Human instructions are 
given in High level 
languages.
Compiler converts high level languages to low level languages or 
machine code.




IDE
1. IDE stands for Integrated 
Development Environment.
2. Software suite that consolidates 
basic tools required for software 
development.
3. Central hub for coding, finding 
problems, and testing.
4. Designed to improve develo




SYNTAX

What is Syntax
• Structure of words in a 
sentence.
• Rules of the language.
• For programming exact 
syntax must be followed


IMPORTANCE OF MAIN METHOD AND FILES

• Entry Point: It's the entry point of a C program, where the execution starts. 
When a C program is executed, the control starts from the main function.
• Required: Every executable C program must have a main function.
• Return Type: Typically returns int, indicating program success (0) or error 
(non-zero) to the operating system.
• Fixed Name: The name main is recognized by C compilers as the program's 
starting point.




1.4 File Extension
.c
• Contain Executable Code
• Compiled: Transformed into executable 
programs.
• Often hosts the main
.h
• Contain Declarations for code to be shared.
• Improve modularity and manageability in 
projects.
• Facilitate code use across multiple .c files 
without duplication







SHOWING OUTPUT 
• The printf function is used for output. It allows you 
to display text and variables to the console. Syntax: 
printf("format string", variable1, variable2, ...);
• Displaying Text: To print text, enclose the message 
in double quotes. printf("Hello, World!");
• New Line: Use \n within the string to move to a new 
line. printf("Hello\nWorld");
• Inserting Values: Use format specifiers like:
• %d or %i : for integers
• %c : for characters
• %f : for decimal number



COMMENTS

1. Used to add notes in C code
2. Not considered as part of code
3. Helpful for code organization
4. Syntax: 
1. Single Line: //
2. Multi Line: 













Naming Conventions 

camelCase
• Start with a lowercase letter. Capitalize the first letter of each 
subsequent word.
• Example: myVariableName
snake_case
• Start with an lowercase letter. Separate words with underscore
• Example: my_variable_name
Kebab-case
• All lowercase letters. Separate words with hyphens. Example: 
my-variable-name
Keep a Good and Short Name
• Choose names that are descriptive but not too long. It should 
make it easy to understand the variable's purpose.
• Example: age, first_name, is_married



 IDENTIFIER RULES

 1. The only allowed characters for identifiers
are all alphanumeric characters([A-Z],[a-z],[0-
9]), and ‘_‘ (underscore). 
2. Can’t use keywords or reserved words
3. Identifiers should not start with digits([0-9]).
4. C identifiers are case-sensitive.
5. There is no limit on the length of the 
identifier but it is advisable to use an 
optimum length of 4 – 15 letters only



int z=10;

TYPES OF INSTRUCTIONS 

1. Type Declaration Instruction: To declare the type of 
variables used in a C program.(1. Define variable and function data types, guiding memory allocation.
2. Syntax: data_type variable_name; e.g., int age;.
3. Common Types: Include int, float, char, double.
4. Allows immediate value assignment, e.g., int count = 10;.
5. Scope: Dictates variable visibility, with local scope inside functions and global scope outside)







2. Arithmetic Instruction: To perform arithmetic 
operations between constants and variables.(Variable on the left of =, and right side can have a combination of 
variables, arithmetic operators & constants.
Types
1.Integer Mode
2.Real Mode
3.Mixed Mod



( Arithmetic operation between an integer and integer always yields an 
integer.
. Arithmetic operation between a real and real always yields a real.
. Arithmetic operation between an integer and a real always yields a real
result. Integer is first promoted to real and then the operation is 
performed.)





3. Control Instruction: To control the sequence of 
execution of various statements in a C program








PRECEDENCE AND ASSOCIATIVITY

Operator Precedence: Determines the evaluation order of 
operators in an expression based on their priority levels.
Associativity: Defines the order of operation for operators with 
the same precedence, usually left-to-right or right-to-left












Control Instructions


Control Instructions enable us to specify the order in which various instructions in a program are executed

1. Sequence Control: Executes instructions in the order they're written.
2. Selection Control: Chooses which instructions to run based on a condition (e.g., `if-else`).
3. Loop Control: Repeats instructions until a condition changes (e.g., `for`, `while`).
4. Case Control: Executes instructions from multiple options based on a variable's value (e.g., `switch`).








*/


