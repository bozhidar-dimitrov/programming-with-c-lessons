#include <stdio.h>

int main(void) {

  int a = 7;
  if (a > 6) { 
    printf("%d", a);
  } else {
    printf("A is not greater\n");
  }

  if (a < 3) {
    printf("A is less than 3\n");
  }

  if (a == 1) {
    printf("A is equal to 1\n");
  } else if (a == 2) {
    printf("A is equal to 2\n");
  } else if (a == 3) {
    printf("A is equal to 3\n");
  } else {
    printf("A is something else\n");
  }

  switch(a) {
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
      printf("A is something else");
  }

  return 0;
}