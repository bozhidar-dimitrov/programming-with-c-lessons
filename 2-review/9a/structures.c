#include <stdio.h>
#include <string.h>

struct Student {
  char name[100];
  int number;
  float averageGrade;
};

int main(void) {

  struct Student dara;

  dara.number = 11;
  dara.averageGrade = 6;
  strcpy(dara.name, "Dara");

  printf("Name: %s\n", dara.name);
  printf("Number: %d\n", dara.number);
  printf("Average grade %f\n", dara.averageGrade);

  return 0;
}