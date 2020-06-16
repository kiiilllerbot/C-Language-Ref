/* C For Loop
 * C for loops is very similar to a while loops in that it continues to process a block of code until a statement becomes false, and everything is defined in a single line. The for loop is also entry-controlled loop.

  Syntax:
  for ( init; condition; increment ){
       statement(s);
    }

 */

// Sample Program
#include<stdio.h>
int main (){
    int n,times=5;;
    for( n = 1; n <= times; n = n + 1 )
    {
        printf("C for loops: %d\n", n);
    }
    return 0;
}

/* Output
  C for loops: 1
  C for loops: 2
  C for loops: 3
  C for loops: 4
  C for loops: 5
 */