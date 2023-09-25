#include <stdio.h>

int main(void) {
  int a = 3;

  if (a == 3) {
    printf("A is equal to 3\n");
  } else {
    printf("A is not equal to 3");
  }

  if (a != 3) {
    printf("A is not equal");
  }

  if (a != 3) printf("A is not equal to 3\n");

  int b = 5;

  if (b == 1) {
    printf("B is equal to 1\n");
  } else if (b == 2) {
    printf("B is equal to 2\n");
  } else if (b == 3) {
    printf("B is equal to 3\n");
  } else {
    printf("B is something else\n");
  }

  switch (b) {
    case 1:
      printf("B is equal to 1\n");
      break;
    case 2:
      printf("B is equal to 2\n");
      break;
    case 3:
      printf("B is equal to 3\n");
      break;
    default:
      printf("B is something else\n");
  }

  return 0;
}