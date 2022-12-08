#include <stdio.h>
#include <limits.h>

int main(void) {

  printf("MIN:%hd\n", SHRT_MIN);
  printf("MAX:%hd\n", SHRT_MAX);
  printf("UNSIGNED MAX: %hu\n", USHRT_MAX);

  short a = SHRT_MIN;
  a--;
  printf("A:%hd \n", a);

  short b = SHRT_MAX;
  b++;
  printf("B:%hd \n", b);

  return 0;
}