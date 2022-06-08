#include <stdio.h>
int main()
{
    //Assume sizeof character is 1 byte and sizeof integer is 4 bytes
    printf("%d", sizeof(printf("GeeksQuiz")));
    return 0;
}
// in this question An expression doesn't get evaluated inside sizeof operator. GeeksQuiz will not be printed. printf returns the number of characters to be printed i.e. 9 which is an integer value. sizeof operator returns sizeof(int).