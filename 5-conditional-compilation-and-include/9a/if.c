#include <stdio.h>

#define BUFFER_SIZE 256

#define OS_TYPE 1

#define WINDOWS 0

#define SINGLE_MACRO

int main(void) {

    #if BUFFER_SIZE >= 256
    printf("We are on OS with buffer size >= 256\n");
    #endif

    #if BUFFER_SIZE >= 512
    printf("We are on OS with buffer size >= 512\n");
    #endif

    #if BUFFER_SIZE >= 256 && OS_TYPE == 1
    printf("We are on OS with buffer size >= 256 and OS type == 1\n");
    #endif

    #ifdef WINDOWS
    printf("We are under Windows!\n");
    #endif

    #if WINDOWS
    printf("We are under Windows 2!\n");
    #endif

    #ifdef SINGLE_MACRO
    printf("Single macro is defined \n");
    #endif

    return 0;
}