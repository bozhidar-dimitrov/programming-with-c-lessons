#include <stdio.h>
#include <conio.h>

#define LINUX 1

int isWindows = 1;

int main(void) {

    #ifdef WINDOWS
    char c = getch(); //<---
    #endif

    #ifdef LINUX
    char c = getchar(); //<---
    #endif

    printf("Input Symbol: %c\n", c);

    //The following code doesn't work under Linux:
    char c2 = 0;
    if (isWindows) {
        c2 = getch();
    } else {
        c2 = getchar();
    }
   
    printf("Input Symbol: %c\n", c2);

    return 0;
}