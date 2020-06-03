/* C If-Else Statements
    else-if statements in C is like another if condition, it's used in a program when if statement having multiple decisions.

    Syntax:
    if(test_expression)
    {
       //execute your code
    }
    else if(test_expression n)
    {
       //execute your code
    }
    else
    {
       //execute your code
    }

*/

// Sample Program
#include <stdio.h>
int main() {
    int a,b,c;

    printf("Enter A Number For a: ");
    scanf("%d", &a);

    printf("Enter A Number For b: ");
    scanf("%d", &b);

    printf("Enter A Number For c: ");
    scanf("%d", &c);

    if ( a > b && a > c ){
        printf("A is greater than b, and c\n");
    }else if(b > a && b > c){
        printf("B is greater than a, and c\n");
    }else{
        printf("C is greater than a, and b\n");
    }

    return 0;
}
