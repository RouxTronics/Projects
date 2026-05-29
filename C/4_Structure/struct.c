#include <stdio.h>

int main() {
    int myChar;         // int, not char — getchar() returns int
    myChar = getchar();

    printf("%c", myChar);
    return 0;
}