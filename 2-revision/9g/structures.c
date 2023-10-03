#include <stdio.h>
#include <string.h>

struct student {
  char name[21];
  int number;
  float avrgrade;
};

int main(void) {

  struct student ivan;
  ivan.avrgrade = 5.5;
  ivan.number = 5;
  strcpy(ivan.name, "Ivan");

  printf("NumberL%d \n", ivan.number);
  printf("Name: %s\n", ivan.name);
  printf("Average grade: \n%f\n", ivan.avrgrade);

  return 0;
}