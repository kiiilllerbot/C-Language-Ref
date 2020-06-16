/* What is Loop?
 * A computer is the most suitable machine to perform repetitive tasks and can tirelessly do a task tens of thousands of times. Every programming language has the feature to instruct  to do such repetitive tasks with the help of certain form of statements. The process of repeatedly executing a collection of statement is called looping. The statements get         executed many numbers of times based on the condition. But if the condition is given in such logic that the repetition continues any number of times with no fixed condition to      stop looping those statements, then this type of looping is called infinite looping.

   C supports the following types of loops:
    -> While Loop
    -> Do While Loop
    -> For Loop

    C Loop Control Statements: Loop control statements are used to change the normal sequence of execution of the loop.

    Statement	        Syntax	                Description
    --------------------------------------------------------
    break statement     break;                  Is used to terminate loop or switch statements.
    continue statement  continue;               Is used to suspend the execution of current loop iteration and transfer control to the loop for the next iteration.
    goto statement      goto labelName;         It transfers the current program execution sequence to some other part of the program.
    goto statement      goto labelName;         It transfers the current program execution sequence to some other part of the program.
                        labelName: statement;

    C while loops statement allows to repeatedly run the same block of code until a condition is met.
    while loop is a most basic loop in C programming. while loop has one control condition, and executes as long the condition is true.  The condition of the loop is tested before      the body of the loop is executed, hence it is called an entry-controlled loop.

    Syntax:
    While (condition)
    {
       statement(s);
       Incrementation;
    }
*/

// Sample Program
#include<stdio.h>
int main (){
    int n = 1,times=5;

    while( n <= times ){
        printf("C while loops: %d\n", n);
        n++;
    }
    return 0;
}

/* Output
C while loops: 1
C while loops: 2
C while loops: 3
C while loops: 4
C while loops: 5
*/