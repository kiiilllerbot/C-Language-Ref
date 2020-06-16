/* C Header Files
   C language is famous for its different libraries and the predefined functions pre-written within it. These make programmer's effort a lot easier. In this tutorial, you will be    learning about C header files and how these header files can be included in your C program and how it works within your C language.

   -> Whate are Header File: Header files are helping file of your C program which holds the definitions of various functions and their associated variables that needs to be         imported into your C program with the help of pre-processor #include statement. All the header file have a '.h' an extension that contains C function declaration and macro        definitions. In other words, the header files can be requested using the preprocessor directive #include. The default header file that comes with the C compiler is the stdio.h.
   Including a header file means that using the content of header file in your source program. A straightforward practice while programming in C or C++ programs is that you can      keep every macro, global variables, constants, and other function prototypes in the header files. The basic syntax of using these header files is:

   Syntax:
   #include <file>  ---> tells the compiler to add stdio.h file from System Libraries to the current source file
   #include "file"  ---> tells the compiler to get header.h from the local directory

   -> Writing of Single and Multiple uses of Header Files: You can use various header files based on some conditions. In case, when a header file needs to be included twice within   your program, your compiler will be going to process the contents inside it - twice which will eventually lead to an error in your program. So to eliminate this, you have to use  conditional preprocessor directives. Here's the syntax:

        #ifndef HEADER_FILE_NAME
        #define HEADER_FILE_NAME
           the entire header file
        #endif

    Again, sometimes it's essential for selecting several diverse header files based on some requirement to be incorporated into your program. For this also multiple conditional      preprocessors can be used like this:

        #if FIRST_SYSTEM
            #include "sys.h"
        #elif SEC_SYSTEM
           #include "sys2.h"
        #elif THRID_SYSTEM
            ....
        #endif
*/
