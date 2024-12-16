#include <stdio.h>

void foo(int a) {
  a++;
  //Infinite recursion causes stack overflow
  //foo(a);
}

int * tryInitArray() {
  int arr[5] = {1, 2, 3, 4, 5};
  //Returns the address of local variable (which will be destroyed with the end of the function)
  return arr;
}

int main(void) {

  int a = 10;
  foo(a);
  printf("Size: %d\n", a);

  int * arr = tryInitArray();
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}