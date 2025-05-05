#include <stdio.h>
#include <stdlib.h>

int sumMatrix(int n, int m, int tab[n][m]){
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
    int tab[2][3] = {{2,-3,4},{1,4,-5}};
    printf("%d\n", sumMatrix(2,3,tab));
    return 0;
}
