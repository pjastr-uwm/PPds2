#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n,int m, int tab[][m]){
    int maximum = tab[0][0];
    int rowIndex = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (maximum < tab[i][j]){
                maximum = tab[i][j];
                rowIndex =i;
            }
        }
    }
    return rowIndex;
}

int main()
{
    int tab[2][3] = {{2,-3,4},{19,4,-5}};
    printf("%d\n", maxRowIdx(2,3,tab));
    return 0;
}
