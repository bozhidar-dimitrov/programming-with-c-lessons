#include <stdio.h>

int main(void) {

  unsigned char lights = 0; //0000 0000

  unsigned char light1 = 1 << 0; //0000 0001
  unsigned char light2 = 1 << 1; //0000 0010
  unsigned char light3 = 1 << 2; //0000 0100
  unsigned char light4 = 1 << 3; //0000 1000
  unsigned char light5 = 1 << 4; //0001 0000
  unsigned char light6 = 1 << 5; //0010 0000
  unsigned char light7 = 1 << 6; //0100 0000
  unsigned char light8 = 1 << 7; //1000 0000

  return 0;
}