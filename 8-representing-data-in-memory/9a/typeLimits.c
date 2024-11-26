#include <stdio.h>
#include <limits.h>

int main(void) {

  //Max char value
  printf("%d\n", CHAR_MAX);

  //Min char value
  printf("%d\n", CHAR_MIN);

  //Max unsigned char value
  printf("%d\n", UCHAR_MAX);

  //Min short value
  printf("%hd\n", SHRT_MIN);

  //Max unsigned long long value
  printf("%llu\n", ULLONG_MAX);

  char b = CHAR_MAX;
  printf("Before: %d\n", b);
  b++;
  printf("After: %d\n", b);
  
  for (char i = 0; 1; i++) {
    printf("%d ", i);
  }

  return 0;
}