#include <stdio.h>

#define BUFFER_SIZE 256
#define OS_TYPE 1

#define WINDOWS 0
#define SINGLE_MACRO

int main(void) {

    #if BUFFER_SIZE >= 256
    printf("We are under OS with buffer size >= 256\n");
    #endif

    #if BUFFER_SIZE >= 512
    printf("We are under OS with buffer size >= 512\n");
    #endif

    #if BUFFER_SIZE >= 256 && OS_TYPE == 1
    printf("We are under OS with buffer size >= 256 with OS type == 1\n");
    #endif

    #ifdef WINDOWS
    printf("Windows is defined!\n");
    #endif

    #if WINDOWS
    printf("Windows is true!\n");
    #endif

    #ifdef SINGLE_MACRO
    printf("SINGLE_MACRO is defined!\n");
    #endif

    #if LINUX
    printf("Something \n");
    #endif

    //This is error: -> if expects the macro to have a value
    // #if SINGLE_MACRO
    // printf("SINGLE_MACRO is defined!\n");
    // #endif

    return 0;
}