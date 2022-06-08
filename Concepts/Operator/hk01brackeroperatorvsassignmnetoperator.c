#include <stdio.h>

int main()
{
    int i = (1, 2, 3);
    
    printf("%d", i);
    
    return 0;
}
// in this question 
// The bracket operator has higher precedence than assignment operator. The expression within bracket operator is evaluated from left to right but it is always the result of the last expression which gets assigned.