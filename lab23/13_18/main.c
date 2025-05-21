#include <stdio.h>
#include <stdlib.h>

enum Day {MON, TUE, WED, THU, FRI, SAT, SUN};

void print_days(enum Day arg, int n){
    if (n==0){
        return;
    }
    arg = arg%7;
    if (arg == MON){
        printf("MON\n");
    }
    else if (arg == TUE){
        printf("TUE\n");
    }
    else if (arg == WED){
        printf("WED\n");
    }
    else if (arg == THU){
        printf("THU\n");
    }
    else if (arg == FRI){
        printf("FRI\n");
    }
    else if (arg == SAT){
        printf("SAT\n");
    }
    else if (arg == SUN){
        printf("SUN\n");
    }
    print_days(++arg,--n);
}

int main()
{
    enum Day d1 = WED;
    print_days(d1, 10);
    return 0;
}
