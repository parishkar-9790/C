#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//added in c99
// restrict keyword is mainly used in pointer declaration as type qualifier for pointer
void use(int *a,int *b,int * restrict c){
    *a=*a+*c;
    // Since c is restrict, compiler will
    // not reload value at address c in
    // its assembly code. Therefore generated
    // assembly code is optimized
    // restiction is mainly used for optimization of the program
    *b=*b+*c;
}
int main()
{
    int a=50,b=60,c=70;
    use(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);

    return 0;
}