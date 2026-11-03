#include <stdio.h>

#define WINDOWS 1

int main(void) {

    #ifdef WINDOWS
    printf("We are under Windows\n");
    #else
    printf("We are under some other OS\n");
    #endif

    #if defined LINUX
    printf("We are under Linux\n");
    #else
    printf("We are under some other OS\n");
    #endif

    return 0;
}