#include <stdio.h>

int main(void) {

  //Assignement - =, +=, -=, /=, *=
  //Comparison operators - ==, >, <,>=,<=,!=
  //Arithmetic operators - +,-,*,/,%
  //Logical operators - &&,||,!
  //Ternery operators - a < b ? a : b;
  //Bitwise operators - &,|,~,^,<<,>>

  char a = 6;
  //0000 0110

  char b = 7;
  //0000 0111

  //Bitwise AND
  char c = a & b;
  //0000 0110
  //0000 0111
  //0000 0110 6 & 7 == 6
  printf("c:%d\n", c);

  //Bitwise OR
  char c1 = a | b;
  //0000 0110
  //0000 0111
  //0000 0111 6 | 7 == 7
  printf("c1:%d\n", c1);

  //Bitwise negation (inverter)
  unsigned char c2 = ~a;
  //0000 0110
  //1111 1001 ~6 == 249
  printf("c2:%u\n", c2);

  // A B A ^ B
  // 0 0  0 
  // 0 1  1
  // 1 0  1
  // 1 1  0
  //Bitwise XOR
  unsigned char c3 = a ^ b;
  //0000 0110
  //0000 0111
  //0000 0001 6 ^ 7 == 1
  printf("c3:%u\n", c3);

  unsigned char c4 = a << 2;
  //0000 0110
  //0001 1000 6 << 2 == 24
  printf("c4:%u\n", c4);

  unsigned char c5 = a >> 2; 
  //0000 0110
  //0000 0001 6 >> 2 == 1
  printf("c5:%u\n", c5);

  unsigned char c6 = 1 << 7; //1000 0000, 1 << x == 2 to power of x

  unsigned char d = 6;
  for (int i = 7; i >= 0; i--) {
    printf("%d", (d >> i) & 1);
  }
  printf("\n");

  return 0;
}