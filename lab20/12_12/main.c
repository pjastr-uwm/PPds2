#include <stdio.h>
#include <stdlib.h>

void revColArr(int n, int m, int ** tab){
    for(int i=0;i<n/2;i++){
        int* temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
}

void printTable(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
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
    printTable(3,3, tab);
    revColArr(3,3, tab);
    printTable(3,3, tab);
    return 0;
}
