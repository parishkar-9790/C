#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
_Noreturn void view()//it generate a compile time error SAYING THAT it does return
{
    printf("THis is new line \n");
    // return 10; // funtion does return value;
}

int main()
{
    printf("ready to begin...\n");
    view();
    printf("not over till now\n");
    return 0;
}