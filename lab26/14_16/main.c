#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumNeg(struct element * list){
    int sum =0;
    struct element * ptr = list->next;
    while(ptr != NULL){
        if (ptr->x < 0){
            sum += ptr->x;
        }
        ptr = ptr->next;
    }
    return sum;
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
    printf("%d\n", sumNeg(list));
    return 0;
}
