/* C Strings
   In C programming, the one-dimensional array of characters are called strings, which is terminated by a null character '\0'.

   -> String declaration C through array of characters: char name[6];
   -> String declaration C through pointer: char *name;
   -> String initialization in C: char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'}; 0r char name[] = "Cloud";
*/

// Sample Program
#include<stdio.h>
int main (){
    char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'};

    printf("Tutorials%s\n", name ); //=> TutorialsCloud

    return 0;
}