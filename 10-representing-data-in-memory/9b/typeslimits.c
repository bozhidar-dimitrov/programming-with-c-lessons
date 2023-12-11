#include <stdio.h>
#include <limits.h>

int main(void) {

  printf("CHAR MAX: %d\n", CHAR_MAX);
  printf("CHAR MIN: %d\n", CHAR_MIN);
  printf("UNSIGNED CHAR MAX: %u\n", UCHAR_MAX);

  printf("LONG MAX: %ld\n", LONG_MAX);

  char a = CHAR_MAX;
  printf("Before: %d\n", a);
  a++;
  printf("After: %d\n", a);

  for (char i = 0; 1; i++) {
    printf("%d ", i);
  }

  return 0;
}