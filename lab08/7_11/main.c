#include <stdio.h>
#include <stdlib.h>

int calculateArithmeticSequenceRecursively(int n, int d){
    if (n==1){
        return 1;
    }
    return calculateArithmeticSequenceRecursively(n-1, d)+d;
}

int main()
{
    printf("%d\n", calculateArithmeticSequenceRecursively(5,4));
    printf("%d\n", calculateArithmeticSequenceRecursively(7,8));
    return 0;
}
