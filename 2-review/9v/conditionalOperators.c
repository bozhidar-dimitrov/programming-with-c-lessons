#include <stdio.h>

int main(void) {

  if (5 > 3) {
    printf("Condition is true\n");
  } else {
    printf("Condition is false\n");
  }

  if (6 > 3) {
    printf("Happens if condition is true\n");
  }
  int x = 7;
  if (x > 10) {
    printf("X is greater than 10\n");
  } else {
    if (x > 5) {
      printf("X is greater than 5\n");
    } else {
      printf("Neither is true\n");
    }
  }

  //Else if alternative
  if (x > 10) {
    printf("X is greater than 10\n");
  } else if (x > 5) {
    printf("X is greater than 5\n");
  } else {
    printf("Neither is true\n");
  }

  int a = 3;
  switch(a) {
    case 1: 
      printf("a == 1\n");
      break;
    case 2:
      printf("a == 2\n");
      break;
    case 3:
      printf("a == 3\n");
      break;
    default:
      printf("a has other value");
  }

  return 0;
}