#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // this method may or may not work cause gets is removed from c(2011)version

    char str[100];
    // gets(str);
    // printf("%s", str);
    // puts(str);

    // another way to initialize
    char parishkar[] = "geeks for geeks";
    puts(parishkar);

    // string with scanf and ^\n method4

    char s[20];
    printf("enter the string\n");
    // scanf("%s", s);      // take the first word only
    scanf("%[^\n]s", s); // take the whole line as input this way is kind of better than the other but it is compiler dependent as per my observations
    printf("the string is:-  %s\n", s);

    // pointer with strings

    char s2[101] = "parishkar singh";
    char *p = s2;
    printf("%s\n", p);

    // pointer with string advanced
    char *p2 = "hello javatpoint";
    printf("String p: %s\n", p2);
    char *q;
    printf("copying the content of p into q...\n");
    q = p2;
    printf("String q: %s\n", q);

    return 0;
}