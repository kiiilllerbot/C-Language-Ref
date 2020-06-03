/* C Goto Statement

    So far we have discussed the if statements and how it is used in C to control statement execution based on some decisions or conditions. The flow of execution also depends     on other statements which are not based on conditions that can control the flow.

    C supports a unique form of a statement that is the goto Statement which is used to branch unconditionally within a program from one point to another. Although it is not a     good habit to use the goto statement in C, there may be some situations where the use of the goto statement might be desirable.

    The goto statement is used by programmers to change the sequence of execution of a C program by shifting the control to a different part of the same program.
*/

// Sample Program
#include <stdio.h>
void main(){
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        // jump to even
        goto even;
    }else {
        // jump to odd
        goto odd;
    }

    even:
    printf("%d is even", num);
    // return if even
    return;

    odd:
    printf("%d is odd", num);

}