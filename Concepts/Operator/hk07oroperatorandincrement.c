#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    int c = a || --b;
    int d = a-- && --b;
    printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
    return 0;
}
// Since a is 1, the expression --b
// is not executed because
// of the short-circuit property
// of logical or operator
// So c becomes 1, a and b remain 1
//    int c = a || --b;

// The post decrement operator --
// returns the old value in current expression
// and then updates the value. So the
// value of expression a-- is 1.  Since the
// first operand of logical and is 1,
// shortcircuiting doesn't happen here.  So
// the expression --b is executed and --b
// returns 0 because it is pre-increment.
// The values of a and b become 0, and
// the value of d also becomes 0.
//    int d = a-- && --b;