#include <stdio.h>

int main(void) {

  //0000 0000
  unsigned char rooms = 0;

  unsigned char room1 = 1 << 0;
  unsigned char room2 = 1 << 1;
  unsigned char room3 = 1 << 2;
  unsigned char room4 = 1 << 3;
  unsigned char room5 = 1 << 4;
  unsigned char room6 = 1 << 5;
  unsigned char room7 = 1 << 6;
  unsigned char room8 = 1 << 7;

  //0000 0000
  rooms = rooms | room1; //=> 0000 0001
  rooms = rooms | room2; //=> 0000 0011

  // 0000 0011
  //&0000 0010
  //=0000 0010
  int islightOn = rooms && room2 == room2;
  printf("Is light on in room 2: %d?", islightOn);

  return 0;
}