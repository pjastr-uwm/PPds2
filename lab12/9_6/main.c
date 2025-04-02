#include <stdio.h>
#include <stdlib.h>

int applyCondition(int (*condition)(int), int (*action)(int), int value){
    int result = condition(value);
    if (result == 1){
        return action(value);
    }
    return value;
}

int cond1(int x){
    return x%2==1;
}

int cond2(int x){
    return abs(x)%2;
}

int shift(int arg){
    return arg +5;
}

int main()
{
    printf("%d\n", applyCondition(cond1, shift, 7));
    printf("%d\n", applyCondition(cond1, shift, -7));
    printf("%d\n", applyCondition(cond2, shift, -7));
    printf("%d\n", applyCondition(cond2, shift, 6));
    return 0;
}
