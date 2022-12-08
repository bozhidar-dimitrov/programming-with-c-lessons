#include <stdio.h>

struct test {
  char a;
  int b;
  int c;
};

int main(void) {
  printf("Size of struct: %zu\n", sizeof(struct test));

  return 0;
}