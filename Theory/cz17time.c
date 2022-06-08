#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
// program to calculate the time taken by a funtion
void timecalculator()
{
    int sum = 0;
    for (int i = 0; i < 100000000; i++)
        sum = sum + i;
}
int main()
{
    // time_t seconds;
    // seconds = time(NULL);
    // printf("second since the today is%ld\n ", seconds);
    clock_t t;
    t = clock();
    timecalculator();
    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds
    printf("fun() took %f second to execute the funtion", time_taken);
    return 0;
}