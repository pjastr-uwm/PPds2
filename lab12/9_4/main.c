#include <stdio.h>
#include <stdlib.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2){
    return operation(number1, number2);
}

double pom(double arg1, double arg2){
    return arg1+arg2+5;
}

int main()
{
    printf("%lf\n", calculateOperation(pom, 3.4, 1.2));
    return 0;
}
