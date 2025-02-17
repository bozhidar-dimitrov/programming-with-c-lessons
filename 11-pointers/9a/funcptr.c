#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int main(void) {

  //Function pointer
  int (*fptr)(int, int) = sum;

  //Calling function via the function pointer
  int result = (*fptr)(5, 10);
  printf("%d\n", result);

  //Alternative variant:
  int result2 = fptr(5, 10);
  printf("%d\n", result2);

  return 0;
}