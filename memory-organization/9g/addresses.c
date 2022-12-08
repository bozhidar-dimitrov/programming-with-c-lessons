#include <stdio.h>

struct test {
  char a;
  char b;
  int c;
};

int main(void) {
  int a = 5;
  printf("%p \n", &a);

  int b[5] = {1, 2, 3, 4, 5};
  printf("%p\n", &b[0]);
  printf("%p\n", &b[1]);
  printf("%p\n", &b[2]);

  printf("Array size in bytes: %zu\n", sizeof(b));

  size_t length = sizeof(b) / sizeof(b[0]);
  printf("Array length %zu\n", length);

  printf("Struct size: %zu\n", sizeof(struct test));

  return 0;
}