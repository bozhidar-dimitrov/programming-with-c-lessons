#include <stdio.h>

#define WINDOWS 0

#define BUFFER_SIZE 256

int main(void) {

    #ifdef WINDOWS
    printf("Buffer size is defined!\n");
    #endif

    #if defined WINDOWS
    printf("Buffer size is defined 2!\n");
    #endif

    #if defined BUFFER_SIZE && BUFFER_SIZE >= 256
    printf("The OS has buffer and it is greater or equal to 256\n");
    #endif

    //Bad practice - avoid using it
    // #ifdef BUFFER_SIZE && BUFFER_SIZE >= 256
    // printf("The OS has buffer and it is greater or equal to 256 2\n");
    // #endif

    #ifndef LINUX
    printf("We are not under Linux\n");
    #endif

    #if ! defined LINUX
    printf("We are not under Linux\n");
    #endif

    return 0;
}