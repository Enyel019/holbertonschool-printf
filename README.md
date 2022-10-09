* Printf:
-----------

* Objective:

Create a function similar to printf.

* Requirements:

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project
---------------------------------------------------------------------------------------------------------------------------------------------------------
Functions:

* _putchar:
Function to prints a character (similar to standard library putchar)

* _printf:
Function similar to printf that returns the number of characters printed.

* formats:
Is a character string. The format string is composed of zero or more directives.

* print_char:
Function to prints a character and return the number of characters printed.

* print_string:
Function to prints a string and return the number of characters printed.

* print_int:
Function to prints integers and base 10 return the number of characters printed.

* print_percent:
Function to print a percent sign

* main.h:
Header file that contains prototypes for all the functions.

* man_3_printf:
Man page created for own printf function.
----------------------------------------------------------------------------------------------------------------------------------------------------------
Usage:

      The _printf function works as follows :

      > _printf FORMAT [ARGUMENT]...

*Parameters:

 -Format:
 formats are always preceded by the character '%'

                  %c :print_char
                  %s :print_string
                  %d :print_signed decimal integer
                  %i :print_signed decimal integer
                  %% :print a percent sign





Authors:
Enyel Feliz Mercado
