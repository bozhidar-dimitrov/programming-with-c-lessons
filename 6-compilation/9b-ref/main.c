#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {

    //This is an array:
    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};

    #ifdef _WIN32
    int myVar = 5;
    #else
    int anotherVar = 12;
    #endif

    return 0;
}