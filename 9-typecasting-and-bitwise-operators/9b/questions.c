#include <stdio.h>

int main(void) {

  unsigned char c = 11;
  unsigned char b = 7;

  //0000 1011
  //0000 0111
  //0000 0011
  unsigned char a = c & b;

  //0000 0000
  unsigned char lightsState = 0;
  
  //0001 0000
  unsigned char light5 = 1 << 4; 

  lightsState |= light5; 

  //0001 0000
  //0001 0000
  //0001 0000
  //lightsState ^ light5

  for (int i = 7; i >=0; i--) {
    printf("%d", (lightsState >> i) & 1);
  }

  return 0;
}