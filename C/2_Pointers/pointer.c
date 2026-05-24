#include <stdio.h>

int main(){
    float x = 50;
    float *ptr = &x;

    printf("Value of x: %f\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %f\n", *ptr);
}