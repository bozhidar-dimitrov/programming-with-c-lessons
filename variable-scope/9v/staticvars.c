#include <stdio.h>

void initialize() {
  return 50;
}

void countcall() {
  static int count = 0;

  //Not allowed:
  //static int test = initialize();

  count++;
  printf("Count:%d\n", count);
}

int main(void) {
  countcall();
  countcall();
  countcall();

  static int count = 3;
  {
    static int count;
    printf("%d\n", count);
  }
  printf("%d\n", count);

  return 0;
}