#include <stdio.h>

int main(void) {

  //0000 0000 (0 in binary)
  //1111 1111 (255 in binary)
  //0000 0110 (6 in binary)
  char a = 6;

  //1's complement - обратен код
  //255 = 0-127 - positive,128-255 - negative (Min:-127, Max:127)
  //0000 0000 - 0
  //1111 1111 - -0
  //0000 0110 (6 in binary)
  //1111 1001 (-6 in 1's complement)

  //2's complement - допълнителен код = 1's complement + 1
  //Min:-128;Max:127 
  //0000 0000 = 0 and -0
  //0000 0110 (6 in binary)
  //1111 1001 (1's complement)
  //1111 1010 (-6 in 2's complement)

  //0000 0000 = 0
  //1000 0000 = -1
  //min:-127;max:+127
  //sign magniture representation (SMR)
  //0000 0110 (6 in binary)
  //1000 0110 (-6 in binary)

  return 0;
}