#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // a = 5(000101) after shifting to the left it will be 10(001010)
    int a = 5, b = 10, c = 2;
    printf("after shifting a =5 to the left %d\n", a << 1);
    printf("after shifting to the right %d \n", a >> 1);
    // by shifting left we can get power 2^;
    printf("the power of 2^ %d ", 1 << 3);
    return 0;
}