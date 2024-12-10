#include <stdio.h>

void printState(unsigned char state) {
  size_t bitCount = sizeof(state) * 8;
  for (char i = bitCount - 1; i>=0; i--) {
    printf("Light %d - %u\n", i + 1, (state >> i) & 1);
  }
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

  printState(lights);

  //0000 0000 - lights
  //0000 1000 - light4
  //0000 1000 - lights | light4
  lights = lights | light4; //Turn on light 4

  lights |= light5; //Turn on light 5
  lights |= light1;

  printf("After turning on lights: 1, 4, 5\n");
  printState(lights);

  if ((lights >> 3) & 1) {
    printf("Light 4 is turned on!\n");
  }

  //0001 1001 - lights
  //0000 1000 - light4
  //0000 1000 - lights & light4 (!= 0)
  if (lights & light5) {
    printf("Light 5 is turned on!\n");
  }
  //0001 1001 - lights
  //0100 0000 - light7
  //0000 0000 - lights & light7 (==0)
  if (lights & light7) {
    printf("Light 7 is turned on!\n");
  } else {
    printf("Light 7 is turned off!\n");
  }

  printf("Turn off light 5: \n");
  //0001 1001 - lights
  //0001 0000 - light5
  //1110 1111 - ~light5
  //0000 1001 - lights & ~light5
  lights &= ~light5;

  printState(lights);

  //0000 1001 - lights
  //0000 0001 - light1
  //0000 1000 - lights ^ light1 == 0000 1000

  //0000 1000 - lights
  //0000 0001 - light1
  //0000 1001 - lights ^ light1
  //=> XOR switches the light - if it is turned on it turns it off if it is turned off it turns it on
  lights ^= light1;
  printf("After switching light 1 (attempt 1):\n");
  printState(lights);

  lights ^= light1;
  printf("After switching light 1 (attempt 2):\n");
  printState(lights);

  return 0;
}