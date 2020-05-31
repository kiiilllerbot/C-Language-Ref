/* C Data Types
    A data-type in C programming is a set of values and is determined to act on those values. C provides various types of data-types which allow the programmer to select the          appropriate type for the variable to set its value.
    The data-type in a programming language is the collection of data with values having fixed meaning as well as characteristics. Some of them are an integer, floating point,        character, etc. Usually, programming languages specify the range values for given data-type.

    C Data Types Are Used To:
        - Identify the type of a variable when it declared.
        - Identify the type of the return value of a function.
        - Identify the type of a parameter expected by a function.

    ANSI C Provides Three Types of Data Types:
        (1) Primary(Built-in) Data Types: void, int, char, double and float.
        (2) Derived Data Types: Array, References, and Pointers.
        (3) User Defined Data Types: Structure, Union, and Enumeration.

    Three More Data Types Have Been Added in C99: _Bool, _Complex, _Imaginary
*/

// Sample Program

#include <stdio.h>
int main(){
    int a = 4000; // positive integer data type
    float b = 5.2324; // float data type
    char c = 'Z'; // char data type
    long d = 41657; // long positive integer data type
    long e = -21556; // long -ve integer data type
    int f = -185; // -ve integer data type
    short g = 130; // short +ve integer data type
    short h = -130; // short -ve integer data type
    double i = 4.1234567890; // double float data type
    float j = -3.55; // float data type

    // The storage representation and machine instructions differ from machine to machine. sizeof operator can use to get the exact size of a type or a variable on a particular       platform.

    printf("Storage size for int is: %d \n", sizeof(int));
    printf("Storage size for char is: %d \n", sizeof(char));
}



