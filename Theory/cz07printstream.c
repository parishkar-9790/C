#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // printf is used to print character stream of data on stdout console
    
    printf("This sentance is being printed on stdout console\n");
    
    // sprintf instead of printing on console it store it on char buffer which are specified in sprintf
    
    char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(buffer, "sum of %d and %d is %d", a, b, c);
    printf("%s", buffer);//this statement print sprintf statement
    
    // fprintf is used to print the string content in file but not on stdout console

    FILE *ptr=fopen("cz07printstream.txt","w");
    fprintf(ptr,"this is being written to file ");
    return 0;
}