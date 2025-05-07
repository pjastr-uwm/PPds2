#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int **tab){
    int minimum = tab[0][0];
    int columnIndex = 0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if (minimum > tab[i][j]){
                minimum = tab[i][j];
                columnIndex = j;
            }
        }
    }
    return columnIndex;
}

int main()
{
    int ** tab=malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));
    tab[0][0] =  1; tab[0][1] =  2; tab[0][2] = -3;
    tab[1][0] =  4; tab[1][1] =  5; tab[1][2] =  6;
    tab[2][0] = -2; tab[2][1] =  1; tab[2][2] =  5;
    tab[3][0] =  4; tab[3][1] = -3; tab[3][2] =  7;
    printf("%d\n", minColIdx(4,3, tab));
    return 0;
}
