#include <stdio.h>
#include <stdlib.h>

int calculate17(int n){
    if (n==0 || n==1){
        return 1;
    }
    return 2* calculate17(n-1);
}

int main()
{
    printf("%d\n", calculate17(0));
    printf("%d\n", calculate17(1));
    printf("%d\n", calculate17(5));
    return 0;
}
