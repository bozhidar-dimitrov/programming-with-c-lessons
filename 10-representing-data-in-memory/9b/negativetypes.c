#include <stdio.h>

int main(void) {

  //0000 0110
  char a = 6;
  //one's complement -127 - 0, 0 - 127
  //1111 1001 - inverted bits of 6

  //two's complement -128 - 0, 0 - 127
  //1111 1001 - one's complement
  //1111 1010 - adding 1 to one's complement - 250
  char b = 250;
  printf("%d\n", b);
  
  //sign magnitute representation
  //1000 0110 - -6 in sign magnitute representation -127-0, 0 - 127

  return 0;
}