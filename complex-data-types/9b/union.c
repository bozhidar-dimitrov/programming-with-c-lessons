#include <stdio.h>

union test {
  int x;
  int y;
};

union complex {
  int x;
  float y;
  double z;
  char a;
};

int main(void) {

  union test test1;
  test1.x = 5;
  printf("%d\n", test1.x);
  printf("%d\n", test1.y);
  
  union complex test2;
  test2.y = 5.5;
  printf("%f\n", test2.y);
  test2.x = 7;
  printf("%f\n", test2.y);

  return 0;
}