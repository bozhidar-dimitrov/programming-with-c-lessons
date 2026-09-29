#include <stdio.h>

int main() {
    
    //Arithmetic operotors
    int a = 5 + 1;
    int b = a - 3;
    int c = b * a;
    int d = c / 2;
    float d1 = 5.0f / 2.0f;
    int e = d % 3;

    //Logical operators
    int a1 = 1;
    int b1 = 0;
    int c1 = a1 && b1;
    int d11 = a1 || b1;
    int e1 = !a1;

    //Comparison operators
    int a2 = 5;
    int b2 = 6;
    int c2 = a2 > b2;
    int d2 = a2 < b2;
    int e2 = a2 >= b2;
    int f2 = a2 <= b2;
    int g2 = a2 != b2;
    int h2 = a2 == b2;

    //Assignement operators
    int x = 5;

    //Combined operators
    x += 5; // x = x + 5;
    x -= 5; // x = x - 5;
    x *= 5; // x = x * 5;
    x /= 5; // x = x / 5;
    x %= 3; // x = x % 3;

    //Incrementational operators and decrementational operators
    x++; // x = x + 1
    x--; // x = x - 1
    ++x; // x = x + 1
    --x; // x = x - 1

    int a3 = 5;
    int b3 = a3++;
    printf("A3 = %d, B3 = %d \n", a3, b3);

    int a4 = 5;
    int b4 = ++a4;
    printf("A4 = %d, B4 = %d \n", a4, b4);
    
    return 0;
}