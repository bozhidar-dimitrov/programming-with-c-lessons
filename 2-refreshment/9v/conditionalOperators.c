#include <stdio.h>

int main(void) {

  int a = 1;

  if (a > 3) 
    printf("A is greater than 3\n");
    printf("Something else\n"); //Can introduce bugs in the program
  

  if (a > 3) {
    printf("A is greater than 3\n");
    printf("Something else\n");
  }

  if (a > 3) {
    printf("A is greater than 3\n");
  } else {
    printf("A is not greater than 3");
  }

  int a1 = 5;
  int b1 = 6;
  int c1 = 3;

  if (a1 > b1) {
    if (a1 > c1) {
      printf("A is the greatest \n");
    } else {
      printf("C is the greatest \n");
    }
  } else {
    if (b1 > c1) {
      printf("B is the greatest\n");
    } else {
      printf("C is the greatest \n");
    }
  }

  //a == 1 => one
  //a == 3 => three
  //a == 5 => five
  //something else

  a = 3;

  if (a == 1) {
    printf("one\n");
  } else {
    if (a == 3) {
      printf("three\n");
    } else {
      if (a == 5) {
        printf("five\n");
      } else {
        printf("Something else");
      }
    }
  }

  //elseif
  if (a == 1) {
    printf("one\n");
  } else if (a == 3) {
    printf("three\n");
  } else if (a == 5) {
    printf("five\n");
  } else {
    printf("Something else");
  }

  printf("Switch case:\n");
  a = 1;
  switch(a) {
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