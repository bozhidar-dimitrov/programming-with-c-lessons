#include <stdio.h>
#include <limits.h>

int main(void) {

  //Max signed char value
  printf("%d\n", CHAR_MAX);

  //Min signed char value
  printf("%d\n", CHAR_MIN);

  //Max unsigned char value
  printf("%u\n", UCHAR_MAX);

  //Max unsigned long value
  printf("%lu\n", ULONG_MAX);

  //Min signed short value
  printf("%hd\n", SHRT_MIN);

  char var1 = CHAR_MAX;
  printf("Var 1 before: %d\n", var1);

  var1++;
  printf("Var 1 after: %d\n", var1);

  for (char i = 0; 1; i++) {
    printf("%d ", i);
  }

  return 0;
}