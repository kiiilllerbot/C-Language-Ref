/* C If Statements

    If statements in C is used to control the program flow based on some condition, it's used to execute some statement code block if the expression is evaluated to true.          Otherwise, it will get skipped. This is the simplest way to modify the control flow of the program.

    The if statement in C can be used in various forms depending on the situation and complexity.
        -> Simple if Statement
        -> if-else Statement
        -> Nested if-else Statement
        -> else-if Ladder

    Syntax:
    if(test_expression){
        statement 1;
        statement 2;
        ...
    }

    'Statement n' can be a statement or a set of statements, and if the test expression is evaluated to true, the statement block will get executed, or it will get skipped.
*/

// Sample Program

#include <stdio.h>

int main() {
    int a = 5, b = 10;

    if(a > b){ printf("a is greater than b\n"); }

    if (b > a){ printf("b is greater than a\n");} // This block will be executed

    return 0;
}
