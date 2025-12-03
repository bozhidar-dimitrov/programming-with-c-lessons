#include <stdio.h>

void printState(char lightsState) {
  size_t lightStateBits = sizeof(lightsState) * 8;
  for (int i = 0; i < lightStateBits; i++) {
    printf("Light %d: %u\n", i+1, (lightsState >> i) & 1);
  }
}

int main(void) {

  char lights[8] = {0, 0, 0, 0, 0, 0, 0, 0}; //64 - bits for the array

  char lightsState = 0; //0000 0101

  char light1 = 1 << 0; //0000 0001
  char light2 = 1 << 1; //0000 0010
  char light3 = 1 << 2; //0000 0100
  char light4 = 1 << 3; //0000 1000
  char light5 = 1 << 4; //0001 0000
  char light6 = 1 << 5; //0010 0000
  char light7 = 1 << 6; //0100 0000
  char light8 = 1 << 7; //1000 0000

  printf("Initial state:\n");
  printState(lightsState);

  lightsState = lightsState | light2;
  //0000 0000 - lightsState
  //0000 0010 - light2
  //0000 0010 - light2 turned on
  printf("After turning on light 2:\n");
  printState(lightsState);

  lightsState = lightsState | (1 << 1);
  //0000 0010 - lightsState
  //0000 0010 - light2
  //0000 0010 - light2 turned on
  printf("After turning on light 2 - again:\n");
  printState(lightsState);

  //Can also be written as:
  lightsState |= 1 << 1;

  printf("After turning on light 2 - third time:\n");
  printState(lightsState);

  //Turn on light 5:
  lightsState |= 1 << 4;
  printf("After turning on light 5:\n");
  printState(lightsState);
  //0001 0010

  lightsState ^= 1 << 1;
  //0001 0010 - lightsState
  //0000 0010 - lights 2;
  //0001 0000
  printf("After switching light 2 - first:\n");
  printState(lightsState);

  lightsState ^= 1 << 1;
  //0001 0000 - lightsState
  //0000 0010 - lights 2;
  //0001 0010
  printf("After switching light 2 - second:\n");
  printState(lightsState);

  //Turn off light 2:
  //0001 0010 - lightsState
  //1111 1101 - 0000 0010 => 1111 1101
  //0001 0000 
  lightsState &= ~(1 << 1);
  printf("After turning off light 2 - first:\n");
  printState(lightsState);

  //Turn off light 2:
  //0001 0000 - lightsState
  //1111 1101 - 
  //0001 0000 
  lightsState &= ~(1 << 1);
  printf("After turning off light 2 - second:\n");
  printState(lightsState);

  //Check if light 5 is turned on:
  if (lightsState & (1 << 4)) {
    printf("Light 5 is turned on!\n");
  }

  return 0;
}