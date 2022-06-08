#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>
// string is a null terminated character array
// they are not data type in c 
// strcat() the funtion used to concatenate or combine two given funtions
// strlen() this function is used to show the lenght.
// strrev() this funtion is used to reverse the string.
// strcpy() this function is used to copy one string into another.
// strcmp() this function is used to compare two given strings.
int main()
{
    // char *s="this is a string";

    // printf("%s\n",s);
    // char p[100];
    // p=strcat("this is one","this is two");
    char s1[]="parishkar singh ";
    char s2[]="this is string 2";
    strcat(s1,s2);
    puts(s1);
    return 0;
}