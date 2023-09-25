#include <stdio.h>
#include <string.h>

struct student {
  char name[20];
  int number;
  float avrgrade;
};

int main(void) {

  struct student ivan;
  ivan.number = 5;
  ivan.avrgrade = 5.5;
  strcpy(ivan.name, "Ivan");

  printf("Number: %d\n", ivan.number);
  printf("Name: %s\n", ivan.name);
  printf("Average grade: %f\n", ivan.avrgrade);

  return 0;
}