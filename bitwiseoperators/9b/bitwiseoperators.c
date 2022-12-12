#include <stdio.h>

//mathematical operators: +, -, *, /, %
//assignement operators: =, +=, -=, *=, /=, ++, --
//logical operators: &, ||, !
//comparison operators: >, <, >=, <=, ==, !=
//ternery operator: ? ((a > b) ? a : b;)
//bitwise operators: 
//  & - bitwise AND
//  | - bitwise OR
//  ~ - bitwise NOT
//  ^ - bitwise XOR (сума по модул 2)
//  <<- btiwise left shift
//  >>- bitwise right shift

int main(void) {

  // 0000 0110 (6)
  char a = 6;

  // 0000 0111 (7)
  char b = 7;

  //  0000 0110 (6)
  //  0000 0111 (7)
  //  0000 0110 a & b = 6
  char c = a & b;
  printf("%d\n", c);

  //  0000 0110 (6)
  //  0000 0111 (7)
  //  0000 0111 a | b = 7
  char d = a | b;
  printf("%d\n", d);

  //  0000 0110 (6)
  //  1111 1001 ~a = 249
  unsigned char e = ~a;
  printf("%u\n", e);

  //  0000 0110 (6)
  //  0000 0111 (7)
  //  0000 0001 a ^ b = 7
  char f = a ^ b;
  printf("%d\n", f);

  //  0000 0110 (6)
  //  0001 1000 6 << 2 = (24)
  char g = a << 2;
  printf("%d\n", g);

  //  0000 0110 (6)
  //  0000 0011 6 >> 1 = (3)
  char h = a >> 1;
  printf("%d\n", h);

  int n = 5;
  //2 to the power of n
  char i = 1 << n;
  printf("%d \n", i);

  return 0;
}