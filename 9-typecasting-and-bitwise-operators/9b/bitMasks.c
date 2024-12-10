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

  lights = lights | light1; //Turn on the first light

  lights = lights | light4; //Turn on the fourth light

  lights = lights | light6; //Turn on the sixth light


  for (int i = sizeof(lights) * 8 - 1; i >= 0; i--) {
    printf("%u", (lights >> i) & 1);
  }
  printf("\n");

  if ((lights >> 3) & 1) {
    printf("Light 4 is on\n");
  }

  //0000 1000 (light4)
  //0000 1001 (lights)
  //0000 1000 lights & light4 == (light4)
  if ( light4 == (lights & light4)) {
    printf("Light 4 is on\n");
  }

  if ( (lights & light4) != 0) {
    printf("Light 4 is on\n");
  }

  //0000 1001 - lights
  //0000 1000 - light4
  //0000 0001 - desired state

  //Turns off light 4 
  if ((lights >> 3) & 1) {
    lights -= light4;
  }

  for (int i = sizeof(lights) * 8 - 1; i >= 0; i--) {
    printf("%u", (lights >> i) & 1);
  }
  printf("\n");

  //Turn off light1 if it is turned on, or turn the light1 if it is turned off
  lights = lights ^ light1;

  for (int i = sizeof(lights) * 8 - 1; i >= 0; i--) {
    printf("%u", (lights >> i) & 1);
  }
  printf("\n");


  //0010 1001 - original lights value
  //0010 0000 - light6

  //1101 1111 - ~light6
  //0010 1001 - 
  //0000 1001 - lights & (~light6)

  //Turn off light 6. If it is turned off it stays turned off
  lights = lights & (~light6);

  for (int i = sizeof(lights) * 8 - 1; i >= 0; i--) {
    printf("%u", (lights >> i) & 1);
  }
  printf("\n");

  return 0;
}