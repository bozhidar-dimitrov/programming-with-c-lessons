#include <stdio.h>

#define WINDOWS
#define BUFFER_SIZE 256

int main(void) {

    #ifdef WINDOWS
    printf("We are under windows!\n");
    #endif

    #if defined WINDOWS
    printf("We are under windows again!\n");
    #endif

    //This is not supported by the C standard
    // #ifdef WINDOWS && BUFFER_SIZE > 256
    // printf("We are under windows!\n");
    // #endif

    #if defined WINDOWS && BUFFER_SIZE >= 256
    printf("We are under windows with buffer size >= 256!\n");
    #endif

    #ifndef LINUX
    printf("We are not under linux \n");
    #endif

    #if !defined(LINUX)
    printf("We are not under linux again\n");
    #endif

    return 0;
}