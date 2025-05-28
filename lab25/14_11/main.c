#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addLast(struct element * list, int a){
    if (list == NULL){
        struct element * ptr = malloc(sizeof(struct element));
        ptr->x = a;
        ptr->next = NULL;
        return ptr;
    }
    struct element * ptr =list;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = malloc(sizeof(struct element));
    ptr->next->x = a;
    ptr->next->next = NULL;
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

    return 0;
}
