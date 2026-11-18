#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    
    if (argc != 3) {
        printf("Wrong number of arguments: the program expects 2 arguments");
        return 1;
    }

    int repeatCount = atoi(argv[1]);
    for (int i = 0; i < repeatCount; i++) {
        printf("%s\n", argv[2]);
    }

    return 0;
}