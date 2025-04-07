#include <stdio.h>

union simple {
  int x;
  int y;
};

union complex {
  int x;
  float y;
  double z;
};

int main(void) {
  union simple test;
  test.x = 10;

  printf("test.y => %d\n", test.y);

  union complex test2;
  test2.z = 5.15;
  test2.x = 150;
  printf("test2.z => %lf\n", test2.z);

  return 0;
}