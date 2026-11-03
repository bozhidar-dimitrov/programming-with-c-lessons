#include <stdio.h>

#define WINDOWS 1

int main() {

    #ifndef WINDOWS
    printf("We are not under windows!\n");
    #endif

    #ifndef LINUX
    printf("We are not under Linux!\n");
    #endif

    return 0;
}