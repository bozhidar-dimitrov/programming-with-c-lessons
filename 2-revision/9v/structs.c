#include <stdio.h>
#include <string.h>

struct student {
  char name[20];
  int number;
  double avrgrade;
};

int main() {

  struct student ivan;

  ivan.number = 10;
  ivan.avrgrade = 5.5;
  strcpy(ivan.name, "Ivan");

  printf("Number: %d\n", ivan.number);
  printf("Name: %s\n", ivan.name);
  printf("Average grade: %s\n", ivan.avrgrade);

  return 0;
}