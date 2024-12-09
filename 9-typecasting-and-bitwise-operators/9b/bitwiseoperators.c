#include <stdio.h>

int main(void) {

  //Arithmetic operators: +,-,/,*,%
  //Logical operators: &&, ||, !
  //Comparison oprators: >,>=, <,<=,==,!=
  //Assignement operators, =, +=, -=, /=, *=, %=, ++,--
  //Ternary operator: a > b ? a : b;
  //Bitwise operators: &,|,~,^,<<,>>

  //0000 0110
  unsigned char a = 6;

  //0000 0111
  unsigned char b = 7;

  //0000 0110
  //0000 0111
  //0000 0110 (6 & 7) == 6
  unsigned char c = a & b;
  printf("%u\n", c);

  //0000 0110
  //0000 0111
  //0000 0111 (6 | 7) == 7
  unsigned char c1 = a | b;
  printf("%u\n", c1);

  //0000 0110
  //1111 1001 ~6 = 249 
  unsigned char c2 = ~a;
  printf("%u\n", c2);

  //0000 0110
  //0000 0111
  //0000 0001 (6 ^ 7) == 1
  unsigned char c3 = a ^ b;
  printf("%u\n", c3);

  //0000 0110
  //0001 1000 (6 << 2) == 24
  unsigned char c4 = a << 2;
  printf("%u\n", c4);

  //0000 0110
  //0000 0001 (6 >> 2) == 1
  unsigned char c5 = a >> 2;
  printf("%u\n", c5);

  int n = 10;
  for (int i = 0; i <= n; i++) {
    printf("%d ", 1 << i);
  }
  printf("\n");

  unsigned char x = 11;
  for (int i = sizeof(x) * 8 - 1; i >= 0; i--) {
    printf("%u", (x >> i) & 1);
  }
  printf("\n");

  return 0;
}