#include <stdio.h>

int main(void) {

  char rooms = 0;

  char room1 = 1 << 0;
  char room2 = 1 << 1;
  char room3 = 1 << 2;
  char room4 = 1 << 3;
  char room5 = 1 << 4;
  char room6 = 1 << 5;
  char room7 = 1 << 6;
  char room8 = 1 << 7;

  //Turn the light in room 2
  rooms = rooms | room2;

  //Checks whether the light is turned on in room2
  room2 == rooms & room2;

  return 0;
}