#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int (*modifier)(int), int number1, int number2){
    return modifier(number1)+modifier(number2);
}

int changeSign(int arg){
    return -arg;
}

int main()
{
    printf("%d\n", modifyAndSum(changeSign, 6,-4));
    return 0;
}
