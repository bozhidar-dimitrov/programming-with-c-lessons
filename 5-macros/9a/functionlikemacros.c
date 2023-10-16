#include <stdio.h>

#define SQUARE(A) A * A
#define SQUARE_SAFE(A) ((A) * (A))
#define SUM(A, B) A + B

int main(void) {

    int x = 10;
    //printf("%d\n", x * x);
    printf("%d\n", SQUARE(x));
    //printf("Sum: %d\n", 11 + 14);
    printf("Sum: %d\n", SUM(11, 14));
    //printf("%d\n", 2 + 1 * 2 + 1);
    printf("%d\n", SQUARE(2 + 1));

    //printf("Safe: %d\n", ((2 + 1) * (2 + 1)));
    printf("Safe: %d\n", SQUARE_SAFE(2 + 1));

    return 0;
}