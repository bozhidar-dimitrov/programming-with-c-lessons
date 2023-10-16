#include <stdio.h>

#define TEST(X) printf(#X)
#define DEBUG(X) printf("The value of " #X " is:%d\n", X)

int main(void) {
    int something = 5;

    printf("Hello," " World\n");

    TEST(something);
    DEBUG(something);

    return 0;
}