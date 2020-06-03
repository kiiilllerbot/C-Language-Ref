/* C Switch Statement

    C switch statement is used when you have multiple possibilities for the if statement. Switch case will allow you to choose from multiple options. When we compare it to a       general electric switchboard, you will have many switches in the switchboard but you will only select the required switch, similarly, the switch case allows you to set the     necessary statements for the user.

    Syntax:
    switch(variable)
    {
    case 1:
       //execute your code
    break;

    case n:
       //execute your code
    break;

    default:
       //execute your code
    break;
    }

    After the end of each block it is necessary to insert a break statement because if the programmers do not use the break statement, all consecutive blocks of codes will get     executed from every case onwards after matching the case block.

*/

#include<stdio.h>
void main(){

    int a;
    printf("Please enter a no between 1 and 5: ");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            printf("You chose One");
            break;

        case 2:
            printf("You chose Two");
            break;

        case 3:
            printf("You chose Three");
            break;

        case 4:
            printf("You chose Four");
            break;

        case 5:
            printf("You chose Five.");
            break;

        default :
            printf("Invalid Choice. Enter a no between 1 and 5");
            break;
    }
}