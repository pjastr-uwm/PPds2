#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a%2 != 0){
        printf("nieparzysta\n");
    }
    else{
        printf("parzysta\n");
    }
    return 0;
}
