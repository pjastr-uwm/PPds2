#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

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

void printListWithoutHead2(struct element * list){
    if (list == NULL){
        printf("Empty list\n");
    }
    struct element * ptr = list;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}


int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -12;
    list->next->next->next = NULL;
    printListWithoutHead(list);
    struct element * list2 = NULL;
    printListWithoutHead(list2);
    printListWithoutHead2(list);
    printListWithoutHead2(list2);
    return 0;
}
