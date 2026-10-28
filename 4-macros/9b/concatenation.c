#include <stdio.h>

#define CREATE_NAME(A, B) A ## B

void warningLog() {
    printf("This is a warning!");
}

int main(void) {

    int infoLog = 5;
    printf("%d\n", infoLog);
    printf("%d\n", CREATE_NAME(info, Log));

    CREATE_NAME(warning, Log)();

    return 0;
}