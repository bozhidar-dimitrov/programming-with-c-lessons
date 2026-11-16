#include "maths.h"

double square(int x) {
    int result = x * x;
    return result;
}

int factoriel(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}