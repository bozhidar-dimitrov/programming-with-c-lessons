#include <stdio.h>

void print(int x) {
  printf("%d\n", x);
}

void doublex(int x) {
  printf("%d\n", 2*x);
}

void squarex(int x) {
  printf("%d\n", x*x);
}

int main(void) {
  
  void (* fptr)(int) = print;
  (* fptr)(5);

  void (* functions[])(int) = {print, doublex, squarex};
  for (int i = 0; i < 3; i++) {
    functions[i](10);
  }

  return 0;
}