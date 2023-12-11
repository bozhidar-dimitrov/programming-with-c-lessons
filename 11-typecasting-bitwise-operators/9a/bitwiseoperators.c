#include <stdio.h>

int main(void) {

  //Arithmetic - +, -, /, %, *
  //Logical operators = &&, ||, !
  //Comparison = >, <, !=, ==, <=, >=
  //Ternary operators = a > b ? a : b;
  //Size - sizeof
  //Bitwise operators: &,|,~,^,<<,>>

  char a = 6;
  //0000 0110 - 6 in binary

  char b = 7;
  //0000 0111 - 7 in binary

  char c = a & b;
  //0000 0110 
  //0000 0111
  //0000 0110 - a & b; = 6 
  printf("c:%d\n", c);

  char c2 = a | b;
  //0000 0110 
  //0000 0111
  //0000 0111 - a | b;
  printf("c2:%d\n", c2);

  unsigned char c3 = ~a;
  //0000 0110 
  //1111 1001 - ~6 = 249
  printf("c3:%d\n", c3);

  char c4 = a ^ b;
  //0000 0110 
  //0000 0111
  //0000 0001 - 6 ^ 7 == 1
  printf("c4:%d\n", c4);

  char c5 = a << 2;
  //0000 0110 
  //0001 1000 = 6 << 2 == 24
  printf("c5:%d\n", c5);

  char c6 = a >> 1;
  //0000 0110 
  //0000 0011 = 6 >> 1 == 3
  printf("c6:%d\n", c6);

  char c7 = 1 << 7; //power of two 2 to the power of 7
  for (int i = 7; i >= 0; i--) {
    printf("%d", (a >> i) & 1);
  }

  return 0;
}