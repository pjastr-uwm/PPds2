#include <stdio.h>
#include <stdlib.h>

float* initFloats(){
    float * temp = malloc(3*sizeof(float));
    if (temp == NULL){
        return NULL;
    }
    *temp = 4.5,
    *(temp+1) = 2.3;
    *(temp+2) = -4.2;
    return temp;
}

int main()
{
    float * result = initFloats();
    printf("%f\n", *result);
    printf("%f\n", *(result+1));
    printf("%f\n", *(result+2));
    free(result);
    return 0;
}
