#include <stdio.h>


int main(void) {
  //0000 0110
  char a = 6;

  //one's complement - -127 - 0, 0 - +127
  //1111 1001

  //two's complement - -128 - 0, 0 - +127 
  //1111 1001 - one's complement
  //1111 1010 - adding one to ones' complement;
  char b = 250;
  printf("%d\n ", b);

  //sign magnitute representation -127 - 0, 0 - +127
  //1000 0110 - first bit indicates the sign

  return 0;
}