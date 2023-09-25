#include <stdio.h>

void sayHello(){
  printf("Hello!");
}

int add(int a, int b) {
  int c = a + b;
  return c;
}

int main(void) {

  sayHello();

  int arg1 = 5;
  int arg2 = 6;
  int result = add(arg1, arg2);
  printf("%d\n", result);

  return 0;
}