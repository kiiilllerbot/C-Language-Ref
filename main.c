/* C Type Casting
    Type Casting in C is used to convert a variable from one data type to another data type, and after type casting compiler treats the variable as of the new data type.
    It's best practice to convert lower data type to higher data type to avoid data loss.

    Syntax: (type_name) expression

    -> Without Type Casting:
    #include <stdio.h>
    int main ()
    {
        int a;
        a = 15/6;
        printf("%d",a); // Output is 2
    }

    -> After Type Casting:
    #include <stdio.h>
    int main ()
    {
        float a;
        a = (float) 15/6;
        printf("%f",a); // Output is 2.500000
    }

    -> Type Conversion Rank: Only Can Be Converted From Lowest to Highest Type
    long double > double > float > unsigned long int > long int > unsigned int > int > char short int



*/

// Sample Program

#include <stdio.h>
int main (){

    int a = 5;
    int b = 3;
    int c;
    float d; // For holding float value after type casting

    c = a/b;

    d = (float) a/b; // Type casting -> int to float

    printf("Value of c Without Type Casting: %d\n",c); // Output is 1
    printf("Value of d After Type Casting: %f\n",d); // Output is 1.666667
}
