#include <stdio.h>
#include <stdlib.h>

int calculate15(int n){
    if (n==1){
        return 1;
    }
    if (n==2){
        return 2;
    }
    return calculate15(n-1)+2*calculate15(n-2);
}

int main()
{
    printf("%d\n", calculate15(3));
    printf("%d\n", calculate15(4));
    printf("%d\n", calculate15(5));
    return 0;
}
