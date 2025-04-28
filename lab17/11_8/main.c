#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char src[], char dest[]){
    int i;
    for(i=0; src[i] !=0; i++){
        dest[i] = src[i];
    }
    dest[i] = 0;
}

int main()
{
    char t1[] = "ABC";
    char t2[] = "OLSZTYN";
    printf("%s %s\n", t1, t2);
    strCopyNew(t1, t2);
    printf("%s %s\n", t1, t2);
    return 0;
}
