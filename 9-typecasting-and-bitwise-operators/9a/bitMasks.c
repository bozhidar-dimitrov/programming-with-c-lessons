#include <stdio.h>

void printState(char lightState) {
  size_t charBits = sizeof(lightState) * 8;
  for (int i = 0; i < charBits; i++) {
    printf("Light %d: %d\n", i+1, (lightState >> i) & 1);
  }
}

int main(void) {

  char lights[8] = {0, 0, 0, 0, 0, 0, 0, 0}; //64 bit 
  //Theoretically 8 bits are enough

  char lightsState = 0; //0000 0000

  char light1 = 1 << 0; //0000 0001
  char light2 = 1 << 1; //0000 0010
  char light3 = 1 << 2; //0000 0100
  char light4 = 1 << 3; //0000 1000
  char light5 = 1 << 4; //0001 0000
  char light6 = 1 << 5; //0010 0000
  char light7 = 1 << 6; //0100 0000
  char light8 = 1 << 7; //1000 0000

  printf("Initial State:\n");
  printState(lightsState);

  lightsState = lightsState | light2;
  //0000 0000 - lightsState
  //0000 0010 - light2
  //0000 0010 - lightsState | light2
  printf("After switching on light 2:\n");
  printState(lightsState);

  lightsState |= 1 << 1;
  //0000 0010 - lightsState
  //0000 0010 - light2
  //0000 0010 - lightsState | light2
  printf("After switching on light 2 - again:\n");
  printState(lightsState);

  lightsState ^= 1 << 4;
  //0000 0010 - lightsState
  //0001 0000 - light5
  //0001 0010- lightsState ^ light5
  printf("After switching light 5 - first:\n");
  printState(lightsState);

  lightsState ^= 1 << 4;
  //0001 0010 - lightsState
  //0001 0000 - light5
  //0000 0010 lightsState ^ light5
  printf("After switching light 5 - second:\n");
  printState(lightsState);

  lightsState ^= 1 << 4;
  //0000 0010 - lightsState
  //0001 0000 - light5
  //0001 0010 lightsState ^ light5
  printf("After switching light 5 - third:\n");
  printState(lightsState);
 
  //0001 0010 - lightsState
  //1111 1101 - ~light2
  //0001 0000 - lightsState & ~light2
  lightsState &= ~(1 << 1);
  printf("After turning off light 2\n");
  printState(lightsState);

  lightsState &= ~(1 << 1);
  printf("After turning off light 2 - second\n");
  printState(lightsState);

  if (lightsState & (1 << 4)) {
    printf("Light 5 is turned on!\n");
  }

  return 0;
}