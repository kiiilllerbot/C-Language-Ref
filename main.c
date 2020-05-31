/* C Variables
    Variables are memory locations(storage area) in the C programming language. The primary purpose of variables is to store data in memory for later use. Unlike constants which do   not change during the program execution, variables value may change during execution. If you declare a variable in C, that means you are asking the operating system to reserve    a piece of memory with that variable name.

    Syntax of Variable Declaration: data_type variable_name; or data_type variable_name, variable_name, variable_name;

    Rules of Choosing Variables Name:
        * A variable name can consist of Capital letters A-Z, lowercase letters a-z, digits 0-9, and the underscore character.
        * The first character must be a letter or underscore.
        * Blank spaces cannot be used in variable names.
        * Special characters like #, $ are not allowed.
        * C keywords cannot be used as variable names.
        * Variable names are case sensitive.
        * Values of the variables can be numeric or alphabetic.
        * Variable type can be char, int, float, double, or void.
 */

// Sample Program

#include <stdio.h>

int main() {

    // Variable Declaration And Initialization
    int    width, height=5;
    char   letter='A';
    float  age, area;
    double d;

    // Variable Assignment
    width = 10;
    age = 26.5;

    // Getting The Output
    printf("Width: %d\n", width);
    printf("Height: %d\n", height);
    printf("Character: %c\n", letter);
    printf("Age: %f\n", age);
    printf("Area: %f\n", area);
    printf("D: %lf\n", d);

    // Sending Exit Code 0 To The OS To Terminate The Program After Execution
    return 0;
}
