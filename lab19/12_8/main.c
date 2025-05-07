#include <stdio.h>
#include <stdlib.h>

void swapItems(int n, int m, int ** tab1, int **tab2){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void printTable(int n, int m, int **tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d][%d] = %d, ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab= malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] = 2; tab[0][1] =  4; tab[0][2] = -3;
    tab[1][0] = 7; tab[1][1] = -5; tab[1][2] =  6;
    int ** tab2= malloc(2*sizeof(int*));
    tab2[0] = malloc(3*sizeof(int));
    tab2[1] = malloc(3*sizeof(int));
    tab2[0][0] =  6; tab2[0][1] = 8; tab2[0][2] = -7;
    tab2[1][0] = -3; tab2[1][1] = 1; tab2[1][2] = -5;
    printTable(2,3,tab);
    printTable(2,3,tab2);
    swapItems(2,3,tab, tab2);
    printTable(2,3,tab);
    printTable(2,3,tab2);
    return 0;
}
