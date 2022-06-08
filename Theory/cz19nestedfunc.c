#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    printf("main\n");
    void fun()
    {
        printf("fun\n");
        void hello()
        {
            printf("this message print hello for you\n");
        }
    }
    fun();
    // hello();//this does not work and cause undefined reference error
    //  advanced nested funtions
    auto void parishkar();
    parishkar();
    printf("this is advance nested loops\n");
    void parishkar(){
        printf("this is parishkar method and print s this line \n");
    }
    return 0;
}