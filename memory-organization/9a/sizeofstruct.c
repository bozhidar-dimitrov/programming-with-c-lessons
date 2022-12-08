#include <stdio.h>

struct test {
  char a;
  char b;
  int c;
};

int main(void) {
  size_t size = sizeof(struct test);
  printf("Size of struct test: %zu \n", size);

  return 0;
}