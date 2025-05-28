#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * createWithHead(){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->next = NULL;
    return ptr;
};

int main()
{
    printf("%p\n", createWithHead());
    return 0;
}
