#include <stdio.h>
#include <stdlib.h>

int * minPtr(int *p1, int*p2, int *p3){
    if (*p1 >= *p2){
        if (*p2 >= *p3){
            return p3;
        }
        return p2;
    }
    if (*p1 >= *p3){
        return p3;
    }
    return p1;
}

int main()
{
    int x=-5, y=-4, z=7;
    printf("%d %d %d\n", x,y,z);
    int * wsk = minPtr(&x,&y, &z);
    printf("%d\n", *wsk);
    return 0;
}
