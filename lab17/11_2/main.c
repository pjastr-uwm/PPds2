#include <stdio.h>
#include <stdlib.h>

int countNums(char txt[]){
    int counter =0;
    for(int i=0; txt[i] !=0;i++){
        if ('0' <= txt[i] && txt[i] <= '9'){
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", countNums("ghsdh5654gs"));
    return 0;
}
