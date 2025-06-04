#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void clearList(struct element * list){
    if(list->next == NULL){
        return;
    }
    struct element * prev = list;
    struct element * current = list->next;
    while(prev->next != NULL){
        prev->next = prev->next->next;
        free(current);
        current = prev->next;
    }
    list->next = NULL;
}

void printListWithHead(struct element * list){
    if (list->next == NULL){
        printf("Empty list\n");
    }
    struct element * ptr = list->next;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = -5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 12;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -7;
    list->next->next->next->next = NULL;
    printListWithHead(list);
    clearList(list);
    printListWithHead(list);
    return 0;
}
