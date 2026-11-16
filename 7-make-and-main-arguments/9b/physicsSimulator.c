#include <stdio.h>
#include "maths.h"

int main(void) {

    int first = factoriel(4);
    double result = square(first);

    printf("[#(|<![Result:%lf]!>|)#]\n", result);

    return 0;
}