#include <stdio.h>
#include <stdlib.h>

enum Month {JANUARY=1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY,
            AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

void days_in_month(enum Month arg){
    if (arg == 1 || arg == 3 || arg ==5 || arg ==7
         || arg ==8 || arg ==10 || arg ==12)
    {
        printf("31 days\n");
    }
    else if (arg == 2){
        printf("28 days\n");
    }
    else{
        printf("30 days\n");
    }
}

void days_in_month2(enum Month arg){
    if (arg == JANUARY || arg == MARCH || arg ==MAY || arg ==JULY
         || arg ==AUGUST || arg ==OCTOBER || arg ==DECEMBER)
    {
        printf("31 days\n");
    }
    else if (arg == FEBRUARY){
        printf("28 days\n");
    }
    else{
        printf("30 days\n");
    }
}

int main()
{
    enum Month e1 = APRIL;
    printf("%d\n", e1);
    days_in_month(e1);
    days_in_month2(e1);
    return 0;
}
