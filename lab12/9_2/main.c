#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for(int i=start; i<=end;i++){
        printf("%d\n", func(i));
    }
}

int square(int x){
    return x*x;
}

int main()
{
    printf("1.----------\n");
    applyFunction(square, 6,10);
    printf("2.----------\n");
    applyFunction(square, 20,10);
    printf("3.----------\n");
    applyFunction(abs, -8,10);
    return 0;
}
