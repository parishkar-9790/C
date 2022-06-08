#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    static int m = 6;
    if (m > 0)
    {
        printf("%d ", m);
        m--;
        main();
    }

    return 0;
}