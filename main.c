/* C Input And Output(IO)
    As we all know the three essential functions of a computer are reading, processing and writing data. Majority of the programs take data as input, and then after processing      the processed data is being displayed which is called information. In C programming we can use scanf() and printf() predefined function to read and print data.

    -> A simple program to add two integers:
    #include <stdio.h>
    int main() {
        int a,b,c;
        printf("Please Enter Any Two Numbers: ");
        scanf("%d %d", &a, &b);
        c = a + b;
        printf("The Result: %d\n", c);
        return 0;
    }
    The above program scanf() is used to take input from the user, and respectively printf() is used to display output result on the screen.

    -> Managing Input / Output:
    I/O operations are useful for a program to interact with users. stdlib is the standard C library for input-output operations. While dealing with input-output operations in C,   two important streams play their role. These are:
        (1) Standard Input (stdin)
        (2) Standard Output (stdout)
    Standard input or stdin is used for taking input from devices such as the keyboard as a data stream. Standard output or stdout is used for giving output to a device such as a   monitor. For using I/O functionality, programmers must include stdio header-file within the program.

    -> Reading Character in C:
    The easiest and simplest of all I/O operations are taking a character as input by reading that character from standard input (keyboard). getchar() function can be used to       read a single character. This function is alternate to scanf() function.
    Syntax: var_name = getchar();

    -> Writing Character in C:
    Similar to getchar() there is another function which is used to write characters, but one at a time.
    Syntax: putchar(var_name);

    -> Formatted Input:
    It refers to an input data which has been arranged in a specific format. This is possible in C using scanf(). We have already encountered this and familiar with this function.
     - The % sign denotes the conversion specification;
     - d defines the number to be read in integer format.
    Input data items should have to be separated by spaces, tabs or new-line and the punctuation marks are not counted as separators.

    -> Reading And Writing Strings in C:
    There are two popular library functions gets() and puts() provides to deal with strings in C.
    gets: The char *gets(char *str) reads a line from stdin and keeps the string pointed to by the str and is terminated when the new line is read or EOF is reached. The            declaration of gets() function is:
    Syntax: char *gets(char *str);
    Where str is a pointer to an array of characters where C strings are stored.

    puts: The function - int puts(const char *str) is used to write a string to stdout, but it does not include null characters. A new line character needs to be appended to the    output. The declaration is:
    Syntax: int puts(const char *str)
    where str is the string to be written in C.
*/
