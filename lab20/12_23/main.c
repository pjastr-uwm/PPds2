#include <stdio.h>
#include <stdlib.h>

int ** transCopy(int n, int ** tab){
    int ** temp = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        temp[i] =  malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = tab[j][i];
        }
    }
    return temp;
}

void printTable(int n,  int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("[%d][%d] = %d, ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] =  4; tab[0][1] = -1; tab[0][2] =  8;
    tab[1][0] =  9; tab[1][1] =  2; tab[1][2] =  4;
    tab[2][0] = -2; tab[2][1] =  7; tab[2][2] = -5;
    printTable(3, tab);
    int ** w = transCopy(3, tab);
    printTable(3, tab);
    printTable(3, w);
    return 0;
}
