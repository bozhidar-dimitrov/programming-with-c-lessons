#include <stdio.h>

int main() {

    //Arithmetic operators
    int a = 5;
    int b = 2;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    float f1 = 5.0f / 2.0f;
    int g = a % b;

    //Logical operators - AND, OR, NOT
    int a1 = 1;
    int b1 = 0;
    
    int c1 = a1 && b1; //c1 == 0
    int d1 = a1 || b1; //d1 == 1
    int e1 = !b1; //e1 == 1

    //Comparison operators
    int a2 = 5;
    int b2 = 2;
    int c2 = a2 == b2; //c2 == 0
    int d2 = a2 != b2; //d2 == 1
    int e2 = a2 < b2;
    int f2 = a2 > b2;
    int g2 = a2 <= b2;
    int h2 = a2 >= b2;

    //Assignement operators
    int a3 = 5;

    //Combined operators
    int a4 = 5;
    a4 += 3; //a4 = a4 + 3;
    a4 -= 3; //a4 = a4 + 3;   
    a4 *= 3; //a4 = a4 + 3;
    a4 /= 3; //a4 = a4 + 3;
    a4 %= 3; //a4 = a4 + 3;

    a4 = a4 + 1;
    a4 += 1;

    //Incremental and decremental operators
    a4++;
    a4--;
    ++a4;
    --a4;

    int a5 = 5;
    int b5 = a5++;
    printf("A5 = %d, B5 = %d\n", a5, b5);

    int a6 = 5;
    int b6 = ++a6;
    printf("A6 = %d, B6 = %d\n", a6, b6);

    return 0;
}