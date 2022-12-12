#include <stdio.h>

int main(void) {

  //0000 0010 (0 - 255) -> 
  char a = 2;

  //1's complement (-127, 0-127)
  //1111 1101 -> 253 (-2)

  //2's complement = 1's complement + 1 (-128, 0-127)
  //0000 0010 -> 2
  //1111 1101 -> 1's complement
  //1111 1110 -> 2's complement (-2)

  //sign magnitude representation (-127, 0-127)
  //0000 0010 -> 2
  //1000 0010 -> -2

  //1111 1110
  char b = 254;

  //0000 0001 -> 1's complement
  //0000 0001-> 0000 0010 -> 2's complement
  //0111 1110-> 126 -> sign mignite representation
  printf("%d\n", b);

  return 0;
}