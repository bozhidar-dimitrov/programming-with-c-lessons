#include <stdio.h>

int sum(int x, int y) {
    int result = x + y;
    return result; 
}

void greet(void) {
    printf("Hello, world\n");
}

int main() {
    int a = 5;
    int b = 7;

    int result = sum(a, b);
    printf("The sum of a and b is: %d\n", result);

    greet();

    return 0;
}