#include <stdio.h>

#define SUM(X,Y) ((X) + (Y))

#define FOO(X) #X

#define CREATE_NAME(A, B) A ## B

int main(void) {

    printf("%d\n", SUM(7,5));

    int something = 5;

    printf("%s\n", FOO(something));

    int infoLog = 10;

    printf("%d", CREATE_NAME(info, Log));

    return 0;
}