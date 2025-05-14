#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * firstName;
    char * lastName;
    int id;
    float gpa;
} Student;

int main()
{
    Student s1 = {"AA", "TT", 45, 6.7};
    Student s2 = {"dd", "gg", 98, 2.3};
    Student s3 = {"TT", "kk", 67, 4.2};
    int tablica[3] = {4,5,6};
    Student tab[] = {s1,s2,s3};
    for(int i=0;i<3;i++){
        printf("First and last name:%s %s, id:%d, gpa:%f.\n",
               tab[i].firstName, tab[i].lastName, tab[i].id, tab[i].gpa);
    }
    return 0;
}
