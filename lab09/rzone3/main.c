#include <stdio.h>
#include <stdlib.h>

int term(int n){
    if (n==1){
        return 5;
    }
    return term(n-1)*10 +5;
}

int series(int n){
    if(n==1){
        return 5;
    }
    return series(n-1)+term(n);
}

int main()
{
    printf("%d\n", term(6));
    printf("%d\n", series(3));
    return 0;
}
