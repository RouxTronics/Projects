#include <stdio.h>
#include <string.h>

int main (){
    int id = 123;
    int *ptr = &id;
    

    printf("Name: %d\n", id);
    printf("Name-Address: %p\n", &id);
    printf("%p\n",ptr);

    
    return 0;

}