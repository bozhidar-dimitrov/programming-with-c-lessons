#include <stdio.h>

int main(void) {

  if (5 > 6 && 5 != 7) {
    printf("5 is greater\n");
  } else {
    printf("5 is not greater");
  }

  if (5 < 6) {
    printf("Something\n");
  }

  int a = 5;
  if (a == 1) {
    printf("A is equal to 1 \n");
  } else if (a == 2) {
    printf("A is equal to 2 \n");
  } else if (a == 3) {
    printf("A is equal to 3 \n");
  } else {
    printf("A is something else");
  }

  switch (a)
  {
    case 1:
      printf("A is equal to 1 \n");
      break;
    case 2:
      printf("A is equal to 2 \n");
      break;
    case 3:
      printf("A is equal to 3 \n");
      break;
    default:
      printf("A is something else");
      break;
  }

  return 0;
}