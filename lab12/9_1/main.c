#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int foo(int arg){
    return arg+8;
}

int main()
{
    printf("%d\n", calculate(foo,8));
    return 0;
}
