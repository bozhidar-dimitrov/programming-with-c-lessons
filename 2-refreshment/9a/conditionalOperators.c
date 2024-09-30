#include <stdio.h>

int main(void) {
  int a = 5;

  if (a > 10) {
    printf("A is greater than 10 \n");
  }

  if (a > 10) {
    printf("A is greater than 10\n");
  } else {
    printf("A is not greater than 10\n");
  }

  if (a > 10) {
    printf("A is greater than 10\n");
  } else {
    if (a > 5) {
      printf("A is greater than 5\n");
    } else {
      printf("A is something else\n");
    }
  }

  if (a > 10) {
    printf("A is greater than 10\n");
  } else if (a > 5) {
    printf("A is greater than 5\n");
  } else {
    printf("A is something else\n");
  }

  int b = 4;
  switch(b) {
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
      printf("B is something else \n");
  }

  return 0;
}