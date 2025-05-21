#include <stdio.h>
#include <stdlib.h>

struct Airplane{
    char * model;
    int engines;
};

int minEngines(struct Airplane tab[], int n){
    int temp = tab[0].engines;
    for(int i=1;i<n;i++){
        if (temp > tab[i].engines){
            temp = tab[i].engines;
        }
    }
    return temp;
}

int main()
{
    struct Airplane tab[] = {
        {"APL", 4},
        {"KLM", 5},
        {"LOT", 6},
        {"ATGV", 2},
    };
    printf("%d\n", minEngines(tab, 4));
    return 0;
}
