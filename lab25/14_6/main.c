#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printOdd(struct element * list){
    struct element * ptr = list->next;
    while(ptr != NULL){
        if(ptr->x %2 !=0){
            printf("%d\n", ptr->x);
        }
        ptr = ptr->next;
    }
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 96;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -52;
    list->next->next->next = NULL;
    printOdd(list);
    return 0;
}
