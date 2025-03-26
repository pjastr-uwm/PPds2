#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int*w){
    *w =x;
}

int main()
{
    int a=7, b=8;
    printf("%d %d\n", a,b);
    copyInt(a,&b);
    printf("%d %d\n", a,b);
    return 0;
}
