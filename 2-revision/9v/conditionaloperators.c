#include <stdio.h>

int main(void) {
  int a = 5;
  int b = 10;
  if (a > b) {
    a = a * b;
  } else {
    b = b / a;
  }

  if (a > b) {
    printf("A is greater");
  }

  int c = 5;
  if (c == 1) {
    printf("A is equal to 1\n");
  } else if (c == 2) {
    printf("A is equal to 2\n");
  } else if (c == 3) {
    printf("A is equal to 3\n");
  } else {
    printf("A is something else\n");
  }

  switch (c) {
    case 1: 
      printf("A is equal to 1\n");
      break;
    case 2: 
      printf("A is equal to 2\n");
      break;
    case 3: 
      printf("A is equal to 3\n");
      break;
    default:
       printf("A is something else\n");
  }

  return 0;
}