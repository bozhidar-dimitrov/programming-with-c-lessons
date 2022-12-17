#include <stdio.h>

int main(void) {

  //0000 0000
  unsigned char rooms = 0;

  unsigned char room1 = 1 << 0; //0000 0001
  unsigned char room2 = 1 << 1; //0000 0010
  unsigned char room3 = 1 << 2; //0000 0100
  unsigned char room4 = 1 << 3;
  unsigned char room5 = 1 << 4;
  unsigned char room6 = 1 << 5;
  unsigned char room7 = 1 << 6;
  unsigned char room8 = 1 << 7;

  //Turns the light in room 4
  //  0000 0000
  //  0000 1000
  //| 0000 1000
  rooms = rooms | room4;

  int roomnum = 6;
  //Turns the light in roomnum
  rooms = rooms | 1 << (roomnum - 1);

  //0101 1101
  //0000 0010 
  //& 0000 0000
  //Checks whether the lights is on in room 4
  printf("Is lights in room 4 turned on?: %d", (rooms & room2) == room2);

  //Checks whether the light is turned on in roomnum
  (rooms & (1 << (roomnum - 1))) == 1 << (roomnum - 1);

  return 0;
}