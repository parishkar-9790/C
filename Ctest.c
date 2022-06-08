#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

bool parenthesis(char *s) {
    int i = 0;
    while (*s != '\0') {
        i++;
        s++;
    }
    printf("%d", i);
    return false;
}

int main() {
    char *s;
//    char e[30];
    printf("enter the string: ");
    scanf("%s", s);
    if (parenthesis(s)) {
        printf("hello there");
    } else
        printf("false policy");

}