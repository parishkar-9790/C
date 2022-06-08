#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// in c language there are 4 types of storage classes
// 1 automatic variable //local variables
// 2 External variable //global variables
// 3 static variable   //static variables
// 4 registor variable //stored in cpu registors
int sum = 344; // external storage class
int myfunc(int a, int b)
{
    extern int sum;// this refers to the global variable 
    sum = a + b+sum;
    return sum;
}
int main()
{
    int hello; // local variable
    int sum = myfunc(5, 10);
    printf("%d\n", sum);
    return 0;
}