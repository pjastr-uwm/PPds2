#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char * color;
};

int main()
{
    struct Rectangle tab[] ={
        {4.4, 5.6, "red"},
        {4.4, 5.6, "red"},
        {4.4, 5.6, "red"},
        {4.4, 5.6, "red"}
    };
    return 0;
}
