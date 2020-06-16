/* C Preprocessors
   The preprocessor is a program invoked by the compiler that modifies the source code before the actual composition takes place. To use any preprocessor directives, first, we have  to prefix them with pound symbol #

   -> All Preprocessor Directives
   Category	                    Directive	    Description
   --------                     ---------       ------------
   Macro substitution division  #include        File include
                                #define         Macro define
                                #undif          Macro undefine
                                #ifdef          If macro defined
                                #ifndef         If macro not defined
    File inclusion division     #if             If
                                #elif           Else If
                                #else           Else
                                #endif          End If
    Compiler control division   #line           Set line number
                                #error          Abort compilation
                                #pragma         Set compiler option
*/

// Sample Program
#include <stdio.h>

// define macro_name character_sequence
#define LIMIT 10

// undefining existing macro LIMIT
#undef LIMIT

// redefining macro LIMIT to 20
#define LIMIT 20

// This tells the compiler to define LIMIT, only if LIMIT isn't already defined.
#ifndef LIMIT
    #define LIMIT 30
#endif

// This tells the compiler to do the process the statements enclosed if LIMIT is defined.
#ifdef LIMIT
/* Your statements here */
#endif

int main(){
    register int counter;
    for(counter =1; counter <=LIMIT; counter++)
    {
        printf("%d\n",counter);
    }
    return 0;
}