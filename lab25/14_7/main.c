#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * createNoHead(){
    return NULL;
};

int main()
{
    printf("%p\n", createNoHead());
    return 0;
}
