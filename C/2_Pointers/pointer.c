#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
int main() {
    int x = 50;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Updated %d to %zu for size_t
    printf("Length of pointer: %zu bytes\n", sizeof(ptr));
    printf("Length of integer: %zu bytes\n", sizeof(int));
    
    return 0;
=======
int main (){
    int id = 123;
    int *ptr = &id;
    

    printf("Name: %d\n", id);
    printf("Name-Address: %p\n", &id);
    printf("%p\n",ptr);

    
    return 0;

>>>>>>> origin/main
}