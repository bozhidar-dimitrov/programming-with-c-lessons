#include <stdio.h>

int main(void) {

  //Assignement - =, +=, -=, *=, /=, --,++
  //Arithmetic operators = *,/,-,+,%
  //Comparison operators = <=,>=,<,>,==,!=
  //Logical operators = &&,||,!
  //Ternary operators (a > b) ? a : b
  //Bitwise - &,|,~,^,<<.>>

  //0000 0110
  int a = 6;

  //0000 0111
  int b = 7;

  //Bitwise AND
  int c = a & b;
  //0000 0110
  //0000 0111
  //0000 0110 = 6 & 7 == 6
  printf("C:%d\n",c);

  //Bitwise OR
  int c1 = a | b;
  //0000 0110
  //0000 0111
  //0000 0111 = 6 | 7 == 7
  printf("c1:%d\n", c1);

  //Bitwise negation (inverter)
  unsigned char c2 = ~a;
  //0000 0110
  //1111 1001 == 249
  printf("c2:%u\n", c2);

  //Bitwise XOR
  int c3 = a ^ b;
  //0000 0110
  //0000 0111
  //0000 0001 6 ^ 7 == 1
  printf("c3:%d\n", c3);

  //Bitwise left shift
  unsigned char c4 = a << 2; 
  //0000 0110
  //0001 1000 6 << 2 == 24
  printf("c4:%d\n", c4);

  //Bitwise right shift
  unsigned char c5 = a >> 2; 
  //0000 0110
  //0000 0001 6 >> 2 == 1
  printf("c5:%d\n", c5);

  unsigned char c6 = 1 << 7; //1000 0000 => 1 << x == 2 to power of x

  //0000 0110
  //0000 0001

  unsigned char d = 6;
  for (int i = 7; i >= 0; i--) {
    printf("%d", (d >> i) & 1);
  }
  printf("\n");

  return 0;
}