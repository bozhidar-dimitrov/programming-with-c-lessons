#include <stdio.h>

int main(void) {

    int result = 0;
    int a = 5;
    int b = 10;
    if (a > b) {
        result = a;
    } else {
        result = b;
    }
    printf("%d\n", result);

    int result2 = a > b ? a : b;
    printf("%d\n", result2);

    printf("%d\n", a > b ? a : b);

    return 0;
}