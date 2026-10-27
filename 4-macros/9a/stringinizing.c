#include <stdio.h>

#define FOO(X) X
//Stringinizing:
#define BAR(X) #X
#define DEBUG_INT(X) printf("The value of " #X " is %d\n", X);

int main(void) {

    int something = 5;
    printf("%d\n", something);
    printf("%d\n", FOO(something));
    printf("%s\n", BAR(something));

    DEBUG_INT(something);

    printf("Hello, world\n");
    printf("Hello" ", world\n");

    return 0;
}