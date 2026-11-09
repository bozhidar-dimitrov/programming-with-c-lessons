#include <stdio.h>

#define WINDOWS 1

int main(void) {

    #ifdef WINDOWS
    printf("We are under Windows !\n");
    #else
    printf("We are not under Windows !\n");
    #endif

    #if defined(LINUX)
    printf("We are under linux !\n");
    #else
    printf("We are not under linux !\n");
    #endif

    //After the preprocessor only these two lines of code are left
    //printf("We are under Windows !\n");
    //printf("We are not under linux !\n");

    return 0;
}