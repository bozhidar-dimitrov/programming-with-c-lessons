#include <stdio.h>
#include "maths.h"

int main(void) {

    int first = factoriel(4);
    double physicsResult = square(first);
    printf("|<![Result: %lf]!>|\n", physicsResult);

    return 0;
}