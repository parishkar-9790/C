#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // continue
    for (int i = 1; i < 10; i++)
    {
        if (i == 5)
            continue; // skip the part
        printf("%d ", i);
    }
    printf("\n");

    // break
    for (int i = 1; i < 10; i++)
    {
        if (i == 5)
            break; // kills the loop
        printf("%d ", i);
    }
    printf("\n");

    // return
    for (int i = 1; i < 10; i++)
    {
        if (i == 111)
            return 0; // it kills the functions
        printf("%d ", i);
    }
    printf("\n");

    // goto statement
    int n = 4;
    if (n % 2 == 0)
        goto label1;
    else
        goto label2;

label1:
    printf("Even\n");

label2:
    printf("Odd\n");

    printf("this is parishkar program\n");

    return 0;
}