#include <stdio.h>

void print(int x) {
  printf("%d\n", x);
}

int main(void) {
  
  void (* fptr)(int) = print;
  (* fptr)(10);

  return 0;
}