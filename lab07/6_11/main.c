#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<0){
        n *= (-1);
    }
    int sumaCyfr = 0;
    if (n==0){
        printf("Cyfra 0\n");
    }
    while(n>0){
        int cyfra = n%10;
        printf("Cyfra %d\n", cyfra);
        sumaCyfr += cyfra;
        n /= 10;
    }
    printf("suma cyfr %d\n", sumaCyfr);
    return 0;
}
