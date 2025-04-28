#include <stdio.h>
#include <stdlib.h>

void rmLower(char txt[]){
    int i=0,j=0;
    for(i=0;txt[i] !=0;i++){
        if(txt[i] < 'a' || txt[i] > 'z'){
            txt[j] = txt[i];
            j++;
        }
    }
    txt[j] = 0;
}

int main()
{
    char t1[] = "AaBbCc";
    printf("%s\n", t1);
    rmLower(t1);
    printf("%s\n", t1);
    char t2[] = "";
    printf("%s.\n", t2);
    rmLower(t2);
    printf("%s.\n", t2);
    char t3[] = "uniwersytet";
    printf("%s.\n", t3);
    rmLower(t3);
    printf("%s.\n", t3);
    return 0;
}
