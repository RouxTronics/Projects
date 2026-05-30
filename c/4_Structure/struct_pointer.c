#include <stdio.h>
#include <string.h>

int main(){

person p1 = {"Alice", 30};
struct Employee e1;

strcpy(e1.name, 'Bob');


printf("Name: %s, Age: %d\n", p1.name, p1.age);

return 0;

}

void Employee(struct Employee *e, char *name, int age) {
    strcpy(e->name, name);
    e->age = age;
}
