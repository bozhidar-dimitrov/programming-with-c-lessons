#include <stdio.h>
#include <string.h>

struct Student {
  char name[100];
  int number;
  float averageSuccess;
};

int main(void) {

  struct Student joleen;
  joleen.number = 10;
  joleen.averageSuccess = 5.45;
  strcpy(joleen.name, "Joleen");

  printf("Name:%s\n", joleen.name);
  printf("Number:%d\n", joleen.number);
  printf("Average success:%.2f\n", joleen.averageSuccess);

  return 0;
}