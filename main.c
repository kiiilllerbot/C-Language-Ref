/* C If-Else Statements

    If else statements in C is also used to control the program flow based on some condition, only the difference is: it's used to execute some statement code block if the         expression is evaluated to true, otherwise executes else statement code block.

    Syntax:
    if(test_expression)
    {
       //execute your code
    }
    else
    {
       //execute your code
    }

*/

#include <stdio.h>
int main() {
    int a, b;

    printf("Plz Enter The Number For A: ");
    scanf("%d", &a);

    printf("Plz Enter The Number For B: ");
    scanf("%d", &b);

    if (a > b){
        printf("a is greater than b\n");
    }else{
        printf("b is greater than a\n");
    };
    return 0;
}
