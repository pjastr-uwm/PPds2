#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size){
    int temp = numbers[0];
    for(int i=1;i<size;i++){
        if (temp < numbers[i]){
            temp = numbers[i];
        }
    }
    printf("%d\n", temp);
}

int main()
{
    int tab[] = {-4,-5,-9,-1,-2};
    findMaxValue(tab, 5);
    return 0;
}
