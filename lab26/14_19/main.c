#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeFirst(struct element * list){
    if (list == NULL){
        return NULL;
    }
    struct element * current = list;
    list = list->next;
    free(current);
    return list;
}

void printListWithoutHead(struct element * list){
    if (list == NULL){
        printf("Empty list\n");
    }
    while(list != NULL){
        printf("%d\n", list->x);
        list = list->next;
    }
    printf("---\n");
}


int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = -5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 12;
    list->next->next->next = NULL;
    printListWithoutHead(list);
    list = removeFirst(list);
    printListWithoutHead(list);
    list = removeFirst(list);
    printListWithoutHead(list);
    list = removeFirst(list);
    printListWithoutHead(list);
    list = removeFirst(list);
    printListWithoutHead(list);
    return 0;
}
