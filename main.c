/* C Nested If-Else Statements

    Nested if else statements play an important role in C programming, it means you can use conditional statements inside another conditional statement.
    Syntax:
    if(test_expression one)
    {
       if(test_expression two) {
          //Statement block Executes when the boolean test expression two is true.
       }
    }
    else
    {
        //else statement block
    }

*/

// Sample Program
#include <stdio.h>
#include <stdbool.h>

int main() {
    char userName[] = "shimol-khan";
    bool loggedIn = true;

    if (loggedIn){
        if (userName){
            printf("Welcome! %s\n", userName); // Welcome! shimol-khan
        }
    }else{
        printf("Plz Sign In To The Console First\n"); // Will not be executed
    }
    return 0;
}
