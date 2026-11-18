#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

    int len = stringLength("Test");
    printf("Len:%d\n", len);

    int first = factoriel(12);
    printf("First:%d\n", first);

    return 0;
}