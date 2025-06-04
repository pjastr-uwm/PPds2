#include <stdio.h>
#include <stdlib.h>

struct Song{
    char * title;
    int length;
};

int getMaxLength(struct Song tab[], int n){
    int temp = tab[0].length;
    for(int i=1;i<n;i++){
        if (tab[i].length > temp){
            temp = tab[i].length;
        }
    }
    return temp;
}

int main()
{
    struct Song tab[] ={
        {"AA", 56},
        {"PP", 76},
        {"KL", 47}
    };
    printf("%d\n", getMaxLength(tab,3));
    return 0;
}
