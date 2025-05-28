#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list;
    return ptr;
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
    struct element * list1 = NULL;
    printListWithoutHead(list1);
    list1 = addFirst(list1, 7);
    printListWithoutHead(list1);
    list1 = addFirst(list1, 6);
    list1 = addFirst(list1, -9);
    printListWithoutHead(list1);
    return 0;
}
