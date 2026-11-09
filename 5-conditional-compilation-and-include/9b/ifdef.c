#include <stdio.h>
#define WINDOWS 1

#ifdef WINDOWS
#include <conio.h>
#endif

int isWindows = 0;

int main(void) {

    #ifdef WINDOWS
    char c1 = getch();
    #endif

    #ifdef LINUX
    char c1 = getchar();
    #endif

    printf("Symbol:%c\n", c1);

    //This strategy doesn't work on OS different than Windows
    // char c = '\0';
    // if (isWindows) {
    //     c = getch();
    // } else {
    //     c = getchar();
    // }
    
    // printf("Symbol:%c\n", c);

    return 0;
}