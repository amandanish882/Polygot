#include <stdio.h>
#include <string.h>

struct Person{
    char name[30];
    double weight;
};

void printPerson(struct Person* person){
    printf("%s\n",person->name);
}

int main(int argc,char** argv){
    struct Person person;
    struct Person person1;
    strcpy(person.name,"Tjisana");
    person.weight = 190.8;
    printf("%s's weight is %g\n",person.name,person.weight);

    //you can assign one struct to another. 
    person1 = person;
    printf("%f\n",person1.weight);

    //can assign values to all memeber of struct
    struct Person man = {"Tjisana Kerr",187.0};
    printf("%s %lu\n",man.name,strlen(man.name));


    //size of struct
    printf("Size of struct Person %lu\n",sizeof(struct Person));

    //passing by reference for struct
    printPerson(&man);
    return 0;
}