#include <stdio.h>
#define ARRAY_SIZE 5

int main(void) {

    //This is an array of 5 elements:
    int array[ARRAY_SIZE] = {1, 2, 3, 4, 5};

    #ifdef _WIN32
    int myVar = 5;
    #else 
    int otherVar = 12;
    #endif

    return 0;
}