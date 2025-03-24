#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n){
    int temp=0;
    for(int i=1;i<=n;i++){
        temp += i*i;
    }
    return temp;
}

int main()
{
    printf("%d\n", sumSquares(5));
    return 0;
}
