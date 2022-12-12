#include <stdio.h>

int main(void) {
  //mathematical operators: -,+,/,*,%
  //logical operators: &&,||, !
  //assigning operators: =, +=, -=, ++, --, *=, /=
  //comparison operators: <, >, <=, >=, ==, !=
  //ternery operator: ? (a > b ? a : b - returns the bigger number)

  //bitwise operators: 
  //& - bitwise AND
  //| - bitwise OR
  //~ - bitwise NOT(negation)
  //^ - bitwise XOR - сума по модул 2
  //<< - left bitwise shift
  //>> - right bitwise shift
  
  //0000 0110
  char a = 6;

  //0000 0111
  char b = 7;

  //0000 0110
  //0000 0111
  //0000 0110 a & b
  char c = a & b;
  printf("%d\n", c);

  //0000 0110
  //0000 0111
  //0000 0111 a | b
  char d = a | b;
  printf("%d\n", d);

  //0000 0110
  //1111 1001 ~a;
  unsigned char e = ~a;
  printf("%d\n", e);

  //XOR
  // 0 0 - 0
  // 0 1 - 1
  // 1 0 - 1
  // 1 1 - 0

  //0000 0110
  //0000 0111
  //0000 0001
  char f = a ^ b;
  printf("%d\n", f);

  char g = 1;
  //g = 0000 0001
  //g << 2 = 0000 0100
  printf("%d\n", g << 2);

  char h = a >> 1;
  // a = 0000 0110
  // a >> 1 = 0000 0011
  printf("%d\n", h);

  return 0;
}