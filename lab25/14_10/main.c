#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list->next;
    list->next = ptr;
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
    struct element * list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    printListWithHead(list1);
    addFirst(list1, 6);
    printListWithHead(list1);
    addFirst(list1, -7);
    addFirst(list1, 12);
    printListWithHead(list1);
    return 0;
}
