#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeLast(struct element * list){
    if (list == NULL){
        return NULL;
    }
    if (list->next == NULL){
        free(list);
        return NULL;
    }
    struct element * current = list->next;
    struct element * prev = list;
    while(current->next != NULL){
        current = current->next;
        prev = prev->next;
    }
    free(current);
    prev->next = NULL;
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
    list->next->next->x = 8;
    list->next->next->next = NULL;
    printListWithoutHead(list);
    list = removeLast(list);
    printListWithoutHead(list);
    list = removeLast(list);
    printListWithoutHead(list);
    list = removeLast(list);
    printListWithoutHead(list);
    list = removeLast(list);
    printListWithoutHead(list);
    return 0;
}
