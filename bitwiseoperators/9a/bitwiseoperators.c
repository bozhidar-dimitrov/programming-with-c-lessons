#include <stdio.h>
// mathematical operators: *, /, +, -, %
// logical operators: &&, ||, !
// assignment operators: =, +=, -=, /=, *=, ++, --
// comparison operators: <=, >=, <, >, ==, !=
// ternery operator: ? (a > b ? a : b - greater of two)
// . -> - accessing member structures
// bitwise operators
//  & - bitwise AND
//  | - bitwise OR
//  ~ - bitwise NOT(negation)
//  ^ - bitwise XOR (сума по модул 2)
//  << - leftwise bit shift
//  >> - rightwise bit shift

int main(void) {

  //0000 0110 - 6
  char a = 6;

  //0000 0111 - 7
  char b = 7;

  //0000 0110 - 6
  //0000 0111 - 7
  //0000 0110 - a & b - 6
  char c = a & b;
  printf("%d\n", c);

  //0000 0110 - 6
  //0000 0111 - 7
  //0000 0111 - a | b - 7
  char d = a | b;
  printf("%d\n", d);

  //0000 0110 - 6
  //1111 1001 - ~a - 249
  unsigned char e = ~a;
  printf("%u\n", e);

  //0000 0110 - 6
  //0000 0111 - 7
  //0000 0001 - a ^ b -1
  char f = a ^ b;
  printf("%d\n", f);
  
  //0000 0011 - 3
  //g << 2 - 0000 1100 - 12
  char g = 3;
  printf("%d\n", g << 2);

  //0000 0110 - 6
  //a >> 1 - 0000 0001 - 3
  char h = a >> 2;
  printf("%d\n", h);

  int n = 5;
  //2 ^ n
  //0000 0001 - 
  int twotothepowerofn = 1 << n;

  return 0;
}