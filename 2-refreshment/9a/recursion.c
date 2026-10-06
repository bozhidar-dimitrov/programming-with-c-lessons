#include <stdio.h>

int sumN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumN(n - 1);
}

int main() {
    int n = 5;
    int result = sumN(n);
    printf("%d", result);
}