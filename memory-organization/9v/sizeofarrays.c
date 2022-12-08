#include <stdio.h>

struct test {
  char a;
  char b;
  int c;
};

int main(void) {
  long a[3] = {1, 2, 3};

  printf("Size of array: %zu \n", sizeof(a));

  //Doesn't work in functions
  size_t length = sizeof(a) / sizeof(a[0]);
  printf("Length of array: %zu \n", length);

  printf("Size of struct test: %zu \n", sizeof(struct test));
  return 0;
}