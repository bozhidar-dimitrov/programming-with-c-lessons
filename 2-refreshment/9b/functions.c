#include <stdio.h>

int sum(int a, int b) {
    int result = a + b;
    return result;
}

void printHello() {
    printf("Hello, world\n");
}

int main() {

    int x = 7;
    int y = 5;

    int newResult = sum(x, y);
    printf("%d", newResult);

    printHello();

    return 0;
}