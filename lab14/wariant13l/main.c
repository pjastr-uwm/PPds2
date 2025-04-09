#include <stdio.h>
#include <stdlib.h>

void minMaxRange(int const*p1, int const*p2, int *p3){
    *p3 = abs(*p1 - *p2);
}

int main()
{
    int a =4, b=-7, c=10;
    printf("%d %d %d\n", a,b,c);
    minMaxRange(&a,&b,&c);
    printf("%d %d %d\n", a,b,c);
    return 0;
}
