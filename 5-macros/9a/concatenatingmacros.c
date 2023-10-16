#include <stdio.h>

#define ASSIGN(NAME, TYPE) TYPE ## NAME = 5

int main(void) {

    int externalquit = 0;
    ASSIGN(quit, external);
    printf("%d", externalquit);

    return 0;
}