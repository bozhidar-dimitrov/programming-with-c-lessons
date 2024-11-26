#include <stdio.h>
#include <limits.h>

int main(void) {

  //char max value:
  printf("%d\n", CHAR_MAX);

  //char min value:
  printf("%d\n", CHAR_MIN);

  //unsigned char max value:
  printf("%u\n", UCHAR_MAX);

  //Short min value
  printf("%hu\n", SHRT_MIN);

  //unsigned long long max value
  printf("%llu\n", ULLONG_MAX);

  char a = CHAR_MAX;
  printf("Before: %d\n", a);

  a++;
  printf("After: %d\n", a);

  for (char i = 0; 1; i++) {
    printf("%d ", i);
  }

  return 0;
}