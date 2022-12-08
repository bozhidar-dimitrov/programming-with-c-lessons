#include <stdio.h>
#include <limits.h>

int main(void) {

  printf("Short max:%hd\n", SHRT_MAX);
  printf("Short min:%hd\n", SHRT_MIN);
  printf("Unsigned short max:%hu\n", USHRT_MAX);

  short a = SHRT_MAX;
  a++; //Overflow
  printf("A:%hd\n", a);

  short b = SHRT_MIN;
  b--;
  printf("B:%hd\n", b);

  return 0;
}