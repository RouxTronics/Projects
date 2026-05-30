/* Pointers and Arrays Relationship
In C, arrays and pointers are closely related. 
An array name can be used as a pointer to the first element of the array.
*/

#include <stdio.h>

int main(){

  int myArray[5] = {10, 20, 30, 40, 50};
  int *ptr = myArray;

  printf("%d\n", *myArray);
    printf("%d\n", *(myArray + 1));
    printf("%d\n", *ptr);
    ++ptr;
    printf("%d\n", *ptr);

return 0;
}