#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5, y=7;
    printf("%d %d\n", x,y);
    x= x^y;
    y= x^y;
    x= x^y;
    printf("%d %d\n", x,y);
    return 0;
}
