#include <stdio.h>
#include <stdlib.h>

int length(const char * txt){
    int i=0;
    while(txt[i] !=0){
        i++;
    }
    return i;
}

char* toUpperNew(const char * txt){
    int d = length(txt);
    char * temp = malloc((d+1) * sizeof(char));
    int i;
    for(i=0;i<d;i++){
        temp[i] = txt[i];
        if ('a' <= temp[i] && temp[i] <= 'z'){
            temp[i] -= 32;
        }
    }
    temp[i] = 0;
    return temp;
}

int main()
{
    char t1[] = "Olsztyn123abc";
    char * w1= toUpperNew(t1);
    printf("%s\n", w1);
    char* t2 = "Olsztyn123abc";
    char * w2= toUpperNew(t2);
    printf("%s\n", w2);
    return 0;
}
