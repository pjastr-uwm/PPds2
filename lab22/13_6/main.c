#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[20];
    int age;
};

struct Person * initPerson(char name[], int age){
    struct Person * temp = malloc(sizeof(struct Person));
    temp->age =age;
    int i;
    for(i=0;name[i] !=0;i++){
        temp->name[i] = name[i];
    }
    temp->name[i] =0;
    return temp;
}

void showPerson(struct Person arg){
    printf("%s %d\n", arg.name, arg.age);
}

void birthday(struct Person * p){
    p->age ++;
}

int main()
{
    struct Person * p1 = initPerson("Tomasz", 27);
    showPerson(*p1);
    birthday(p1);
    showPerson(*p1);
    return 0;
}
