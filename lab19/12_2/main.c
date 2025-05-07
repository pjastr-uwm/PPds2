#include <stdio.h>
#include <stdlib.h>

int sumArray(int n, int m, int **tab){
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp += tab[i][j];
        }
    }
    return temp;
}

int main()
{
    int ** tab= malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] = 2; tab[0][1] =  4; tab[0][2] = -3;
    tab[1][0] = 7; tab[1][1] = -5; tab[1][2] =  6;
    printf("%d\n", sumArray(2,3,tab));
    free(tab[0]);
    free(tab[1]);
    free(tab);
    return 0;
}
