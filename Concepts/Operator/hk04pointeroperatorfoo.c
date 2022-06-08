#include <stdio.h>
int foo(int* a, int* b)
{
    int sum = *a + *b;
    *b = *a;
    return *a = sum - *b;
}
int main()
{
    int i = 0, j = 1, k = 2, l;
    l = i++ || foo(&j, &k);
    printf("%d %d %d %d", i, j, k, l);
    return 0;
}
// lgoic behind the question is The control in the logical OR goes to the second expression only if the first expression results in FALSE. The function foo() is called because i++ returns 0(post-increment) after incrementing the value of i to 1. The foo() function actually swaps the values of two variables and returns the value of second parameter. So, values of variables j and k gets exchanged and OR expression evaluates to be TRUE.