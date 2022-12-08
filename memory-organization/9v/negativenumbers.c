#include <stdio.h>

int main(void) {

  //6 - 0000 0110
  char a = 6;
  int b = 0;

  //one's complement - обратен код 0 - 255 (-126 - 0, 0 - 126)
  //0000 0110 - binary (6)
  //1111 1001 - 1's complement (-6)

  //two's complement - допълнителен код = 1's complement + 1 (-127 - 0, 0 - 126)
  //0000 0110 - binary (6)
  //1111 1001 - 1's complement
  //1111 1010 - 2's complement (-6)

  //sign magnitute representation - прав код (-126 - 0, 0 - 126)
  //0000 0110 - binary (6)
  //1000 0110 - SMR (-6)

  return 0;
}