#include <stdio.h>
#include <limits.h>

int main(void) {

  printf("char max: %d\n", CHAR_MAX);
  printf("char min: %d\n", CHAR_MIN);
  printf("unsigned char max: %d\n", UCHAR_MAX);

  printf("unsigned long long max: %llu\n", ULLONG_MAX);

  return 0;
}