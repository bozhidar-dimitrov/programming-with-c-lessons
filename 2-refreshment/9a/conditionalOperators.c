#include <stdio.h>

int main(void) {

  int a = 3;

  if (a > 5) {
    printf("A is greater than 5\n");
    printf("Something else\n");
  }

  if (a > 5)
    printf("A is greater than 5\n");
    printf("Something else\n");

  if (a > 5) {
    printf("A is greater than 5\n");
  } else {
    printf("A is not greater than 5\n");
  }

  int a2 = 5;
  int b2 = 7;
  int c2 = 6;

  if (a2 > b2) {
    if (a2 > c2) {
      printf("A is the greatest\n");
    } else {
      printf("C1 is the greatest \n");
    }
  } else {
    if (b2 > c2) {
      printf("B is the greatest \n");
    } else {
      printf("C is the greatest \n");
    }
  }

  int a1 = 3;
  //if a1 == 1 => one
  //if a1 = 3 => three
  //if a1 = 5 => five
  //else => something else
  if (a1 == 1) {
    printf("one\n");
  } else {
    if (a1 == 3) {
      printf("three\n");
    } else {
      if (a1 == 5) {
        printf("five\n");
      } else {
        printf("something else\n");
      }
    }
  }

  //else if
  if (a1 == 1) {
    printf("one\n");
  } else if (a1 == 3) {
    printf("three\n");
  } else if (a1 == 5) {
    printf("five\n");
  } else {
    printf("something else\n");
  }

  switch (a1) {
    case 1:
      printf("one\n");
      break;
    case 3:
      printf("three\n");
      break;
    case 5:
      printf("five\n");
      break;
    default:
      printf("Something else\n");
  }

  return 0;
}