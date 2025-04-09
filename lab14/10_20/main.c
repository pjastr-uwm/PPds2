#include <stdio.h>
#include <stdlib.h>

int isEqual(int n, int tab1[], int tab2[]){
    for(int i=0;i<n;i++){
        if (tab1[i] != tab2[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tab1[] = {5,6,7};
    int tab2[] = {5,3,7};
    printf("%d\n", isEqual(3, tab1, tab2));
    return 0;
}
