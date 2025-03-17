#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d", &n);
    if (n<3){
        printf("Tak liczb nie ma");
        return -1;
    }
    int prev=0, curr=0, next=0;
    printf("Podaj a1\n");
    scanf("%d", &prev);
    printf("Podaj a2\n");
    scanf("%d", &curr);
    int counter=0;
    for(int i=3;i<=n;i++){
        printf("Podaj a%d\n", i);
        scanf("%d", &next);
        if (2*curr - prev < next){
            counter++;
        }
        prev =curr;
        curr= next;
    }
    printf("Takicz liczb jest %d\n", counter);
    return 0;
}
