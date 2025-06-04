#include <stdio.h>
#include <stdlib.h>

int countWords(char * txt){
    int counter = 0;
    for(int i=0;txt[i] != 0;i++){
        if (txt[i] == ' '){
            counter++;
        }
    }
    return counter+1;
}

int main()
{
    printf("%d\n", countWords("ALA MA KOTA"));
    return 0;
}
