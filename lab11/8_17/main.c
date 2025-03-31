#include <stdio.h>
#include <stdlib.h>

void swapSign(double *p1, double *p2){
    if (*p1 * *p2 <0){
        double temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}


int main()
{
    double x=-9, y=3;
    printf("%lf %lf\n", x,y);
    swapSign(&x,&y);
    printf("%lf %lf\n", x,y);
    return 0;
}
