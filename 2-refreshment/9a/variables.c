#include <stdio.h>

int main() {
    int a = 5;
    long a1 = 8;
    float b = 10.5;
    double c = 3.14004234;
    char e = 'x';

    printf("A=%d\n", a);
    printf("A1=%ld\n", a1);
    printf("B=%.2f\n", b);
    printf("C=%lf\n", c);
    printf("A=%c\n", e);

    return 0;
}