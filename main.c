/* C Do While Loop
 * C do while loops are very similar to the while loops, but it always executes the code block at least once and furthermore as long as the condition remains true. This is an          exit-controlled loop.

   Syntax:
   do{
       statement(s);
    }while( condition );
*/

// Sample Program
#include<stdio.h>
int main (){
    int n = 1,times=5;
    do
    {
        printf("C do while loops: %d\n", n);
        n = n + 1;
    }while( n <= times );
    return 0;
}

/* Output

C do while loops: 1
C do while loops: 2
C do while loops: 3
C do while loops: 4
C do while loops: 5
 */