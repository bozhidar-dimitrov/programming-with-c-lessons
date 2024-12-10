#include <stdio.h>

void printLightsState(unsigned char state) {
  int stateBits = sizeof(state) * 8;
  for (int i = stateBits- 1; i >= 0; i--) {
    printf("Light %d - %u\n", i + 1, (state >> i) & 1);
  }
  printf("\n");
}

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

  printLightsState(lights);

  //Turn on light4, light6, light1

  //0000 0000 - lights
  //0000 1000 - light4
  //0000 1000 - lgihts | lights4
  lights = lights | light4;

  lights |= light6;
  lights |= light1;
  printf("After turning on lights: \n");
  printLightsState(lights);

  //Check if a light is turned on:
  
  //0010 0001 - lights
  //0000 1000 - mask of light 4
  //0000 1000
  //if (light & light4 != 0)
  if (lights & light4) {
    printf("Light 4 is turned on!\n");
  }

  //Check if light 6 is turned on
  if ((lights >> 5) & 1) {
    printf("Light 6 is turned on!\n");
  }

  //Turn off the light if it is turned on:

  printf("Turn off light 6:");
  //Turn off light 6
  //0010 1001 - lights
  //0010 0000 - light6
  //1101 1111 - ~light6
  //0000 1001 - lights & (~light6)
  lights &= ~light6;
  printLightsState(lights);

  //0010 1001 - lights
  //0000 1000 - light4

  //0010 0001 - lights ^ light4
  //0000 1000 - light4
  //0010 1001 - lights ^ light4
  //=> XOR siwtches the light (if the light is turned off it will turn it on and if it is turned on it will turned it on)
  printf("First XOR on light4\n");
  lights ^= light4;
  printLightsState(lights);

  printf("Second XOR on light4\n");
  lights ^= light4;
  printLightsState(lights);

  return 0;
}