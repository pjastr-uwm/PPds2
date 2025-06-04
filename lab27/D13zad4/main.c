#include <stdio.h>
#include <stdlib.h>

struct elem {
    int i;
    struct elem * next;
};

void printAbsolute(struct elem * list){
    struct elem * ptr = list;
    while(ptr != NULL){
        printf("%d\n", abs(ptr->i));
        ptr = ptr->next;
    }
}

int main()
{
    struct elem * list = malloc(sizeof(struct elem));
    list->i = -4;
    list->next = malloc(sizeof(struct elem));
    list->next->i = -5;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->i = -8;
    list->next->next->next = NULL;
    printAbsolute(list);
    return 0;
}
