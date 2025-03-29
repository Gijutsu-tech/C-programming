#include <stdio.h>

int main()
{

    // 1. Variable and data types--
    printf("This is variable tutorial!\n");

    int favNum;                                     // Variable declaration.
    favNum = 5;                                     // Variable initialization.
    printf("My favourite number is %d \n", favNum); //%d is called format specifier

    // Basic Data Types in C - int, char, float, double - better float, _Bool - boolean.

    char myFavAlphabet = 'P'; //Always single quote
    char myName[] = "Parth";  // Declaring a string
    float height = 157.48;
    float height = 157.48;
    printf("My name is %s and my height is %f cm. \n", myName, height); //use %.2f to round float numbers to two decimal points. Float in C is not extremely precise, use double for most accuracy.

    // %d	Integer (int)
    // %c	Character (char)
    // %s	String (char[])
    // %f	Float (float)
    // %lf	Double (double)
    // %x	Hexadecimal (int)
    // %o	Octal (int)



    // 2. Rules for naming variables in C---

    int abc;           // alowed
    int _user;         // allowed
    int mynumber1 = 1; // alowed

    // 1. First character must be an alphabet or underscore(_).
    // 2. Commas and whitespaces are not allowed.
    // 3. Specials symbols (such as #,$) except underscore(_) are not allowed.
    // 4. Parentheses or even any type of brackets are not allowed.
    // 5. There are 32 keywords in C (Such as int, char, if, else). Those are reserved words and cannot be used for variable creation.



    // 3. sizeOf operator in C---
    printf("Size of Int is: %zu bytes \n", sizeof(int));     // usually 4
    printf("Size of Char is: %zu bytes \n", sizeof(char));   // usually 1
    printf("Size of Float is: %zu bytes \n", sizeof(float)); // usually 4
    // sizeOf operator is used to know the size of a data type in the memory of our system. It returns the value in bytes. Sizes are different for different systems.

    return 0;
    // never write anything after return 0; because that code will not be executed!!!
}