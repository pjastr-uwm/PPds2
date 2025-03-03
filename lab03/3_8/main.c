#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    int result = x>y ? x : y;
    printf("%d\n", result);
    return 0;
}
