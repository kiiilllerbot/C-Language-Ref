/* C Storage Classes
   Storage Classes are associated with variables for describing the features of any variable or function in the C program. These storage classes deal with features such as scope,    lifetime and visibility which helps programmers to define a particular variable during the program's runtime. These storage classes are preceded by the data type which they had   to modify.

   -> Storage Classes: There are four storage classes types in C
        (1) auto
        (2) register
        (3) static
        (4) extern

    -> Auto Storage Class: auto comes by default with all local variables as its storage class. The keyword auto is used to define this storage class explicitly
       Syntax:
       int roll; // contains auto by default
       auto int roll;    // in addition, we can use auto keyword also

       The above example has a variable name roll with auto as a storage class. This storage class can only be implemented with the local variables.

    -> Register Storage Class: This storage class is implemented for classifying local variables whose value needs to be saved in a register in place of RAM (Random Access            Memory). This is implemented when you want your variable the maximum size equivalent to the size of the register. It uses the keyword register.
       Syntax:
       register int  counter;

       Register variables are used when implementing looping in counter variables to make program execution fast. Register variables work faster than variables stored in RAM             (primary memory).

       Example:
       for(register int counter=0; counter<=9; counter++){
        // loop body
       }

    -> Static Storage Class: This storage class uses static variables that are used popularly for writing programs in C language. Static variables preserve the value of a variable    even when the scope limit exceeds. Static storage class has its scope local to the function in which it is defined.
    On the other hand, global static variables can be accessed in any part of your program. The default value assigned is '0' by the C compiler. The keyword used to define this       storage class is static. Global variables are accessible throughout the file whereas static variables are accessible only to the particular part of a code. The lifespan of a      static variable is in the entire program code. A variable which is declared or initialized using static keyword always contains zero as a default value.
        Syntax:
        static int var = 6;

    -> Extern Storage Class: The extern storage class is used to feature a variable to be used from within different blocks of the same program. Mainly, a value is set to that       variable which is in a different block or function and can be overwritten or altered from within another block as well. Hence it can be said that an extern variable is a global   variable which is assigned with a value that can be accessed and used within the entire program. Moreover, a global variable can be explicitly made an extern variable by          implementing the keyword 'extern' preceded the variable name.

*/
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
