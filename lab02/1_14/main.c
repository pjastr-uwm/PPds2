#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0.10009;
    float b = 0.200407;
    float c = 1.3008;
    printf("%.20f\n", a+(b+c));
    printf("%.20f\n", (a+b)+c);
    return 0;
}
