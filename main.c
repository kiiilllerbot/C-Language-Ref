/* About the C Programming Language
    C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, with a static type system. By design,   C provides constructs that map efficiently to typical machine instructions.
*/

/* Some Facts About C Programming Language
    -> In 1988, the American National Standards Institute (ANSI) had formalized the C language.
    -> C was invented to write UNIX operating system.
    -> C is a successor of 'Basic Combined Programming Language' (BCPL) called B language.
    -> Linux OS, PHP, MySQL, and many more Programs are written in C.
    -> C has been written in assembly language.
*/

/* Uses of C Programming Language
    -> Database Systems
    -> Language Interpreters
    -> Compilers and Assemblers
    -> Operating Systems
    -> Network Drivers
    -> Word Processors
*/

/* C Has Become Very Popular For Various Reasons
    -> One of the early programming language.
    -> Still, the best programming language to learn quickly.
    -> C language is reliable, simple, and easy to use.
    -> C language is a structured language.
    -> Modern programming concepts are based on C.
    -> It can be compiled on a variety of computer platforms.
    -> Universities preferred to add C programming in their courseware.
*/

/* Features of C Programming Language
    -> C is a robust language with a rich set of built-in functions and operators.
    -> Programs written in C are efficient and fast.
    -> C is highly portable; programs once written in C can be run on other machines with minor or no modification.
    -> C is a collection of C library functions; we can also create our function and add it to the C library.
    -> C is easily extensible.

    C is imperative language and designed to compile in a relatively straightforward manner which provides low-level access to the memory. With the gradual increase in the popularity of the program, the language and its compiler have become available on a wide range of platforms from embedded microcontrollers to supercomputers.
With the introduction of K&R C language (which is a new edition of C published in 1978 by Brian Kernighan and Denis Ritchie), several features have been included in C language.
    * Standard I/O (Input/Output) Library
    * long int - data type
    * unsigned int - data type
    * Compound assignment operators

    During the late 1980s, C was started to use for a wide variety of mainframe computers, micro and mini computers which began to get famous. Gradually C got its superset - i.e., C++ which has added features, but it's developed from C with all its initial concepts.
*/

/* Advantages of C Language
    -> C is the building block for many other programming languages.
    -> Programs written in C are highly portable.
    -> Several standard functions are there (like in-built) that can be used to develop programs.
    -> C programs are collections of C library functions, and it's also easy to add functions to the C library.
    -> The modular structure makes code debugging, maintenance, and testing easier.
*/

/* Disadvantages of C Language
    -> C does not provide Object Oriented Programming (OOP) concepts.
    -> There are no concepts of Namespace in C.
    -> C does not provide binding or wrapping up of data in a single unit.
    -> C does not provide Constructor and Destructor.
*/

/* Limitations of C Language
    -> Difficult to debug.
    -> C allows a lot of freedom in writing code, and that is why you can put an empty line or white space anywhere in the program. And because there is no fixed place to start or end the line, so it is difficult to read and understand the program.
    -> C compilers can only identify errors and are incapable of handling exceptions (run-time errors).
    -> C provides no data protection.
    -> It also doesn't feature re-usability of source code extensively.
    -> It does not provide strict data type checking (for example an integer value can be passed for floating datatype).
*/

// Sample Hello World Program in C Language

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
