#include <stdio.h>

int main()
{
    int i = 1024;
    int counter = 0;
    for (; i; i >>= 1)
    {
        printf("GeeksQuiz\n");
        counter++;
    }
    printf("print times =%d \n",counter);
    return 0;
}