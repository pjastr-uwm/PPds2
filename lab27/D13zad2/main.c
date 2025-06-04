#include <stdio.h>
#include <stdlib.h>

void revSecDiag(int ** tab, int n){
    for(int i=0;i<n/2;i++){
        int temp = tab[i][n-1-i];
        tab[i][n-1-i] = tab[n-1-i][i];
        tab[n-1-i][i] =  temp;
    }
}

void printTable(int ** tab, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("[%d,%d] = %d, ", i, j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab = malloc(3*sizeof(int *));
    tab[0] =  malloc(3*sizeof(int));
    tab[1] =  malloc(3*sizeof(int));
    tab[2] =  malloc(3*sizeof(int));
    tab[0][0] =  3; tab[0][1] = -4; tab[0][2] =   5;
    tab[1][0] =  1; tab[1][1] = 22; tab[1][2] = -33;
    tab[2][0] = -3; tab[2][1] =  5; tab[2][2] =  -7;
    printTable(tab,3);
    revSecDiag(tab,3);
    printTable(tab,3);
    return 0;
}
