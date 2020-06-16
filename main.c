/* C Recursion
   C is a powerful programming language having capabilities like an iteration of a set of statements 'n' number of times. The same concepts can be done using functions also. In      this chapter, you will be learning about recursion concept and how it can be used in the C program.

   -> Recursion: Recursion can be defined as the technique of replicating or doing again an activity in a self-similar way calling itself again and again, and the process continues  till specific condition reaches. In the world of programming, when your program lets you call that specific function from inside that function, then this concept of calling the   function from itself can be termed as recursion, and the function in which makes this possible is called recursive function.

   Syntax:
   void rec_prog(void) {
        rec_prog(); //function calls itself
   }

   int main(void) {
        rec_prog();
        return 0;
    }

    C program allows you to do such calling of function within another function, i.e., recursion. But when you implement this recursion concept, you have to be cautious in defining   an exit or terminating condition from this recursive function, or else it will continue to an infinite loop, so make sure that the condition is set within your program.
*/

// Sample Factorial Program Using Recursion
#include<stdio.h>

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n-1));
}

void main()
{
    int number;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial of %d is %ld\n", number, fact);
}


/*******************************************************************************/

// Sample Fibonacci Program Using Recursion
#include<stdio.h>
int Fibonacci(int);
int main(){
    int n, i = 0, c;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Fibonacci series\n");

    for ( c = 1 ; c <= n ; c++ )
    {
        printf("%d\n", Fibonacci(i));
        i++;
    }

    return 0;
}

int Fibonacci(int n)
{
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( Fibonacci(n-1) + Fibonacci(n-2) );
}