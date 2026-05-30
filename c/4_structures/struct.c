// using structures with typedef and pointers

#include <stdio.h>
#include <string.h>

typedef struct  {
    char name[50];
    int age;
}Person;  

int main(){
    Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    return 0;
}