#include <stdio.h>

void test() {
  return 50;
}

int countFunctions() {
  static int a = 0;
  //Not allowed:
  //static int a = test();
  a++;
  printf("%d\n", a);
}

int main(void) {

  countFunctions();
  countFunctions();
  countFunctions();

  return 0;
}