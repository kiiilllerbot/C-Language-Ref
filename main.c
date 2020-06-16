/* C Custom Header File
   You can create your custom header files in C; it helps you to manage user-defined methods, global variables, and structures in a separate file, which can be used in different     modules.

   -> Process to create custom header file.
*/

// For example, I am calling an external function named swap in my main.c file.
#include<stdio.h>
#include"swap.h"

void main()
{
    int a=20;
    int b=30;
    swap (&a,&b);
    printf ("a=%d\n", a);
    printf ("b=%d\n",b);
}

/* Note
   - header file name must have a .h file extension.
   - In this example, I have named swap.h header file.
   - Instead of writing <swap.h> use this terminology swap.h for include custom header file.
   - Both files swap.h and main.c must be in the same folder.
*/