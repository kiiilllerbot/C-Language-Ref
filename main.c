/* C Library Functions
   The C library functions are provided by the system and stored in the library. The C library function is also called an inbuilt function in C programming. To use Inbuilt Function  in C, you must include their respective header files, which contain prototypes and data definitions of the function.
 */

// Sample Program
#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>

void main(){
    // Variables Defining and Assign values
    int i = -10, e = 2, d = 10;
    float rad = 1.43;
    double d1 = 3.0, d2 = 4.0;

    printf("%d\n", abs(i)); //-> 10
    printf("%f\n", sin(rad)); //-> 0.990105
    printf("%f\n", cos(rad)); //-> 0.140332
    printf("%f\n", exp(e)); //-> 7.389056
    printf("%d\n", log(d)); //-> -1145744106
    printf("%f\n", pow(d1, d2)); //-> 81.000000
}