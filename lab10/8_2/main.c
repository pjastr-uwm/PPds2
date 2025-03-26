#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y){
    return x+y;
}

int sumVals(int *p1, int *p2){
    return *p1 + *p2;
}

void addPtr(int*p1, int*p2, int*p3){
    *p3 = *p1+ *p2;
}

int main()
{
    int x=2, y=4;
    printf("%d\n", sum(x,y));
    printf("%d\n", sumVals(&x, &y));
    int wynik;
    addPtr(&x, &y, &wynik);
    printf("%d\n", wynik);
    return 0;
}
