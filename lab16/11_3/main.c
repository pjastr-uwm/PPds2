#include <stdio.h>
#include <stdlib.h>

int countVow(char txt[]){
    char vowels[] = "aeoiuyAEOUIY";
    int counter=0;
    for(int i=0;txt[i] !=0; i++){
        for(int j=0; vowels[j] !=0;j++){
            if (txt[i] == vowels[j]){
                counter++;
                break;
            }
        }
    }
    return counter;
}

int isVowel(char c){
    char vowels[] = "aeoiuyAEOUIY";
    for(int j=0; vowels[j] !=0;j++){
        if (c == vowels[j]){
            return 1;
        }
    }
    return 0;
}

int countVow2(char txt[]){
    int counter=0;
    for(int i=0;txt[i] !=0; i++){
        if (isVowel(txt[i])){
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", countVow("Olsztyn"));
    printf("%d\n", countVow2("Olsztyn"));
    return 0;
}
