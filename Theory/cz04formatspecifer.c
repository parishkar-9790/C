#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // Character format specifier : %c

    char ch = 'A';
    printf("%c\n", ch);

    // For Signed Integer format specifier : %d, %i

    int x = 45, y = 90;
    printf("%d\n", x);
    printf("%i\n", x);
    // Unsigned Integer Format Specifier: %u:
    // The -10 value is converted into it's positive
    // equivalent by %u
    printf("%u \n", -10);
    printf("%u\n", 10);
    // Floating-point format specifier : %f, %e or %E
    float a = 12.67;
    printf("%f\n", a);
    printf("%e\n", a);
    // to convert number into octal
    int a = 67;
    printf("%o\n", a);
    // Unsigned Hexadecimal for integer: %x, %X  to convert number into octadecimal
    int a = 15;
    printf("%x\n", a);

    return 0;
}