#include <stdio.h>
#include <stdlib.h>

void sqrCopy(int const * p1, int *p2){
    *p2 = (*p1) * (*p1);
}

int main()
{
    int x=4, y=-3;
    printf("%d %d\n", x,y);
    sqrCopy(&x, &y);
    printf("%d %d\n", x,y);
    return 0;
}
