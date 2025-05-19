#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char manufacturer[30];
    int usage_hours;
};

int length(char txt[]){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

struct Computer * initComputer(char manufacturer[], int usage_hours){
    int d = length(manufacturer);
    if (d <=1 && usage_hours<=0){
        return NULL;
    }
    struct Computer * temp = malloc(sizeof(struct Computer));
    temp->usage_hours = usage_hours;
    for(int i=0;i<d;i++){
        temp->manufacturer[i] = manufacturer[i];
    }
    temp->manufacturer[d] = 0;
    return temp;
}

void showComputer(struct Computer arg){
    printf("%s %d\n", arg.manufacturer, arg.usage_hours);
}

void increaseUsage(struct Computer*p){
    p->usage_hours +=100;
}

int main()
{
    struct Computer * c1 = initComputer("Acer", 345);
    if (c1!=NULL){
        showComputer(*c1);
        increaseUsage(c1);
        showComputer(*c1);
    }

    return 0;
}
