#include <stdio.h>

#define WINDOWS 1

int main(void) {

    #ifndef WINDOWS
    printf("We are not under Windows!\n");
    #endif

    #ifndef LINUX
    printf("We are not under Linux!\n");
    #endif

    return 0;
}