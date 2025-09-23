#include <stdio.h>

int main(void) {

  int a = 5;
  if (a > 5) 
    printf("A is bigger than 5\n");
    printf("Another thing\n"); //This will be executed every time
  
  if (a > 5) {
    printf("A is bigger than 5\n");
    printf("Another statement\n");
  }

  if (a > 3) {
    printf("A is greater than 3\n");
  } else {
    printf("A is not greater than 3\n");
  }

  int a1 = 5;
  int b1 = 3;
  int c1 = 7;
  if (a1 > b1) {
    if (a1 > c1) {
      printf("A is the greatest\n");
    } else {
      printf("C is the greatest\n");
    }
  } else {
    if (b1 > c1) {
      printf("B is the greatest \n");
    } else {
      printf("C is the greatest \n");
    }
  }

  int a2 = 5;
  //If a2 == 1 => one
  //If a3 == 3 => three;
  //If a3 == 5 => five
  //else => something else
  if (a2 == 1) {
    printf("one\n");
  } else {
    if (a == 3) {
      printf("three\n");
    }else {
      if (a == 5) {
        printf("five\n");
      } else {
        printf("something else\n");
      }
    }
  }

  if (a2 == 1) {
    printf("one\n");
  } else if (a == 3) {
    printf("three\n");
  } else if (a == 5) {
    printf("five\n");
  } else {
    printf("something else\n");
  }

  printf("Switch statement:\n");
  a2 = 3;
  switch (a2) {
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
      printf("something else\n");
  }

  return 0;
}