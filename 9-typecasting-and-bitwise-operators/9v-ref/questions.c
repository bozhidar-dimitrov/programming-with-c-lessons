#include <stdio.h>

int main(void) {

  int a = 11;
  int b = 7;

  //0000 1011
  //0000 0111
  //0000 1100
  int c = a ^ b;

  unsigned char lightsState = 0;

  unsigned char light5 = 1 << 4;
  lightsState = lightsState | light5;

  size_t nBits = sizeof(lightsState) * 8;
  for (int i = 0; i < nBits; i++) {
    printf("Light: %d - %u\n", i+1, (lightsState >> i) & 1);
  }

  return 0;
}