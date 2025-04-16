#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char txt[]){
    for(int i=0;txt[i]!=0;i++){
        if ('a' <=txt[i] && txt[i] <='z'){
            txt[i] -= ('a'-'A');
        }
    }
}

int main()
{
    char t1[] = "Olsztyn123abc";
    toUpperNew(t1);
    printf("%s\n", t1);
    return 0;
}
