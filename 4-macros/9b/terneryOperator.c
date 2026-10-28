#include <stdio.h>

int main(void) {

    int result = 0;
    int a = 5;
    int b = 7;

    if (a > b) {
        result = a;
    } else {
        result = b;
    }

    printf("%d\n", result);

    //terneryOperator
    int result1 = a > b ? a : b;
    printf("%d\n", result1);
    //Question:
    printf("%d\n", a > b ? 3 : 4);

    return 0;
}