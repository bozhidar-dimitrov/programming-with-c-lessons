#include <stdio.h>
#include <string.h>

struct Student {
  int number;
  char name[100];
  float averageSuccess;
};

int main(void) {

  struct Student ivan;

  ivan.number = 14;
  ivan.averageSuccess = 5.5;
  strcpy(ivan.name, "Ivan");

  printf("Number: %d\n", ivan.number);
  printf("Name: %s\n", ivan.name);
  printf("Average success: %.2f\n", ivan.averageSuccess);

  return 0;
}