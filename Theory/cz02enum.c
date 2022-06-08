#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.
enum week
{
    MON,
    TUE,
    WED,
    THUR,
    FRI,
    SAT,
    SUN
};
enum year
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};
enum State
{
    Working = 1,
    Failed = 0,
    Freezed = 0
};
enum day
{
    sunday = 1,
    monday,
    tuesday = 5,
    wednesday,
    thursday = 10,
    friday,
    saturday
};
int main()
{
    enum week day;
    enum week month;
    day = SUN;
    printf("the day is %d\n", day);
    for (int i = 0; i <= Dec; i++)
    {
        printf("%d,", i);
    }
    printf("\n");
    printf("%d, %d, %d", Working, Failed, Freezed);
    printf("\n");
    printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);
    return 0;
}