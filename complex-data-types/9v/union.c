#include <stdio.h>
#include <limits.h>

union test {
  int x;
  int y;
};

union complex {
  double x;
  float y;
  int z;
};

union Person {
  int numberinclass;
  int egn;
};

int main(void) {

  union test test1;
  test1.x = 5;

  printf("%d\n", test1.x);
  printf("%d\n", test1.y);

  union complex test2;
  test2.x = 5.5;
  printf("%lf\n", test2.x);

  test2.z = INT_MAX;
  printf("%lf\n", test2.x);

  return 0;
}