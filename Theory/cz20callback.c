#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void a()
{
    printf("this is function A\n");
}
void b(void (*ptr)())
{
    printf("this is funtion B\n");
    (*ptr)();
}
int main()
{
    void (*ptr)()=&a;
    b(ptr);
    return 0;
}