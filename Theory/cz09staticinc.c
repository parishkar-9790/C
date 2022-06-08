#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// scope is a region where a defined variable can exist and beyond which it cannot exists.
// this can only be accesed inside the funtion they are declared in
int ghi = 10; // global variable accesible everywhere
// static variable are variable which have property of preserving their values even when they go out of scope
int countstaticly()
{
    static int a = 0;
    a++;
    return a;
}
int main()
{

    printf("%d\n", ghi);
    countstaticly();
    countstaticly();
    countstaticly();
    countstaticly();
    printf("%d\n",countstaticly());

    return 0;
}