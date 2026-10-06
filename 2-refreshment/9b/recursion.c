#include <stdio.h>

int sumN(int n) {
    if (n == 0) {
        return 0;
    }
    return sumN(n-1) + n;
}

int main(void){
    int n = 5;
    int result = sumN(n);
    printf("%d", result);

    /*
    sumN(5) = sumn(4) + 5
    sumN(4) = sumN(3) + 4
    sumN(3) = sumN(2) + 3
    sumN(2) = sumn(1) + 2
    sumN(1) = sumn(0) + 1
    ----------------------
    ----------------------
    sumN(n) = sumN(n-1) + n
    sumN(0) = 0
    */

    return 0;
}