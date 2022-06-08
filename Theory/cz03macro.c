#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LIMIT 5
#define AREA(l, b) (l * b)
#define DATE 31
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 200
#define min(a, b) (((a) < (b)) ? (a) : (b)) //template to get min of two number 
#define ELE 1, \
            2, \
            3
 
// A macro is a piece of code in a program that is replaced by the value of the macro. Macro is defined by #define directive. Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the macro. Macro definitions need not be terminated by semi-colon(;).
int main()
{
    printf("The value of LIMIT is %d \n", LIMIT);
    int l1 = 10, l2 = 20;
    int area = AREA(l1, l2);
    printf("The area of the rectangle is %d \n", area);
    printf("Lockdown may extend upto %d-MAY-2020\n", DATE);
    printf("Geeks for Geeks have %d"" followers on Instagram",INSTAGRAM);
    int arr[] = { ELE };
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    int a = 18;
    int b = 76;
 
    printf("Minimum value between"
           " %d and %d is %d\n",
           a, b, min(a, b));
 
    return 0;
}