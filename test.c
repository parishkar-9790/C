// Author : Parishkar Singh
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int a = 10;
    int *p;
    p = a;
    int **pp = p;
    printf("The value of the pointer is %d\n", a);
    printf("The value of the pointer is %d\n", p);
    printf("The value of the pointer is %d\n", pp);
    return 0;
}