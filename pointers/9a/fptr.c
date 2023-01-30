#include <stdio.h>

void print(int x, int y) {
  printf("%d, %d\n", x, y);
}

int main(void) {
  void (* fptr)(int, int) = print;
  (* fptr)(10, 15);

  return 0;
}