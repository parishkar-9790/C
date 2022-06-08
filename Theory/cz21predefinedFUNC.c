#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// basically it prints the funtion name itself
void foo(void)
{
    printf("%s\n", __func__);
}
void this(void)
{
    printf("%d\n", sizeof(__func__));
}
void advance(void)
{
    printf("file names is:-%s the name of function is:- %s the line no is:-%d\n", __FILE__, __func__, __LINE__);
}
void pretty(void)
{
    printf("the result of the pretty is %s\n", __PRETTY_FUNCTION__);
}

int main(void)
{
    foo();
    this();
    advance();
    pretty();
    return 0;
}