#include <stdio.h>
#include <limits.h>

int main(void) {

  printf("Unsigned char max: %u\n", UCHAR_MAX);
  printf("Short min: %hd\n", SHRT_MIN);
  printf("Short max: %hd\n", SHRT_MAX);
  printf("int max: %d\n", INT_MAX);
  printf("Unsigned int max: %u\n", UINT_MAX);
  printf("Unsigned long long max: %llu\n", ULLONG_MAX);

  int x = INT_MAX;
  x++;
  printf("X:%d\n", x);

  short y = SHRT_MIN;
  y--;
  printf("Y:%d\n", y);

  return 0;
}