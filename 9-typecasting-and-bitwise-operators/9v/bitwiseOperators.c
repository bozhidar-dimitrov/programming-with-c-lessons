#include <stdio.h>

int main(void) {

  //Arotmetic operators - +,-,%,/,*
  //Logical operators - &&, ||, !
  //Comparison operators = <,>,==,<=,>=, !=
  //Assignement operators =, =,+=,-=,*=,/=,%=,++,--
  //Ternary operators = a > b ? a:b;
  //Bitwise = &,|,<<,>>,~,^

  //0000 0110
  unsigned char a = 6;

  //0000 0111
  unsigned char b = 7;

  //0000 0110
  //0000 0111
  //0000 0110 (6 & 7)
  unsigned char c = a & b;
  printf("%u\n", c);

  //0000 0110
  //0000 0111
  //0000 0111 (6|7)
  unsigned char c2 = a | b;
  printf("%u\n", c2);
  
  //0000 0110 (6)
  //1111 1001 (~6) = 249
  unsigned char c3 = ~a;
  printf("%u\n", c3);

  //0000 0110
  //0000 0111
  //0000 0001 (6 ^ 7) == 1
  unsigned char c4 = a ^ b; //XOR
  printf("%u\n", c4);

  //0000 0110 (6)
  //0001 1000 (6 << 2)
  unsigned char c5 = a << 2;
  printf("%u\n", c5);

  //0000 0110 (6)
  //0000 0001 (6 >> 2) == 1
  unsigned char c6 = a >> 2;
  printf("%u\n", c6);

  //Print power of 2 numbers
  int n = 5;
  for (int i = 0; i <= n; i++) {
    printf("%u ", 1 << i);
  }
  printf("\n");

  unsigned char x = 11;
  for (char i = 8 - 1; i>=0; i--) {
    printf("%u", (x >> i) & 1);
  }
  printf("\n");

  return 0;
}