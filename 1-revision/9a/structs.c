#include <stdio.h>
#include <string.h>

struct student {
  char name[20];
  int number;
  float average;
};

int main(void) {

  struct student ivan;

  ivan.number = 5;
  ivan.average = 10.5;
  strcpy(ivan.name, "Ivan");

  printf("%d\n", ivan.number);
  printf("%s\n", ivan.name);
  printf("%f\n", ivan.average);

  return 0;
}