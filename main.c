/* C Arrays
   The array is a data structure in C programming, which can store a fixed-size sequential collection of elements of the same data type. For example, if you want to store ten        numbers, it is easier to define an array of 10 lengths, instead of defining ten variables. In the C programming language, an array can be One-Dimensional, Two-Dimensional, and    Multidimensional.
*/

// Sample Program
#include <stdio.h>
int main() {

    // Define an Array
    int myArray[5];
    int n = 0;

    // Initializing elements of array separately
    for(n=0;n<sizeof(myArray)/sizeof(myArray[0]);n++)
    {
        myArray[n] = n;
        printf("%d\n", myArray[n]);
    }
    int a = myArray[3]; // Assigning 3rd element of array value to integer 'a'.
    printf("Re-assigning value: %d", a);
}
