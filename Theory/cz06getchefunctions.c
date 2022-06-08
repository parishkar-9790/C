#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // getc()
    // it read a single character value from given input stream and return the corresponding integer value on success. It return EOF on failure also it can read from any input stream
    // int getc(FILE *stream);
    char c = getc(stdin);
    printf("%c\n", c);
    // printf("%c", getc(stdin));//extended method

    getchar();
    // getchar()
    // getchar() is equivalent to getc(stdin)
    // int getchar(void);
    printf("%c\n", getchar());
    return 0;
}