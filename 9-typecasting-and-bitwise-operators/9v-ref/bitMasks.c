#include <stdio.h>

void printState(char lightState) {
  size_t charBits = sizeof(lightState) * 8;
  for (int i = 0; i < charBits; i++ ) {
    printf("Light %d:%u\n", i+1, (lightState >> i) & 1);
  }
}

int main(void) {

  //Solving the problem with array
  char lights[8] = {0,0,0,0,0,0,0,0}; //64 bit for the array

  char lightsState = 0;

  char light1 = 1 << 0; //0000 0001
  char light2 = 1 << 1; //0000 0010
  char light3 = 1 << 2; //0000 0100
  char light4 = 1 << 3; //0000 1000
  char light5 = 1 << 4; //0001 0000
  char light6 = 1 << 5; //0010 0000
  char light7 = 1 << 6; //0100 0000
  char light8 = 1 << 7; //1000 0000

  //Lights initial state:
  printState(lightsState);

  lightsState = lightsState | light6; 
  //The above can be written
  lightsState = lightsState | (1 << 5);
  printf("After turning light 6:\n");
  printState(lightsState);

  //Turn on light 2
  lightsState |= 1 << 1;
  printf("After turning light 2:\n");
  printState(lightsState);

  //Turn off light 2
  //~light2 == 0000 0010 ==> 1111 1101
  lightsState &= ~light2;
  //Can also be written as
  lightsState &= ~(1 << 1);
  //0010 0010 - lightsState
  //1111 1101 - ~light2
  //0010 0000 - lightsState & ~light2
  printf("After turning off light 2:\n");
  printState(lightsState);

  //Switch light 4 (if it is turned off - turn on and vice versa)
  lightsState ^= 1 << 3;
  //0010 0000 - lightsState
  //0000 1000 - 1 << 3 (light4)
  //0010 1000 - lightsState ^= 1 << 3
  printf("After switching light 4:\n");
  printState(lightsState);

  //Switch light 4 again:
  lightsState ^= 1 << 3;
  //0010 1000 - lightsState
  //0000 1000 - 1 << 3 (light4)
  //0010 0000 - lightsState ^= 1 << 3
  printf("After switching light 4:\n");
  printState(lightsState);

  //Check if light 5 is turned on:
  if (lightsState & (1 << 4)) {
    printf("Light 5 is turned on!\n");
  }

  return 0;
}