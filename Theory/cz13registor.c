#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Registers are faster than memory to access, so the variables which are most frequently used in a C program can be put in registers using register keyword. The keyword register hints to compiler that a given variable can be put in a register. It’s compiler’s choice to put it in a register or not. Generally, compilers themselves do optimizations and put the variables in register.
// registor class cannot be used with static class 
// register int x = 10;//error global scope
int main()
{
    // register int i = 10;
    // int *a = &i;
    // printf("%d", *a);
    // getchar();

    int i = 10;
    register int* a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}