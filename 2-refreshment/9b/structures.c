#include <stdio.h>
#include <string.h>

struct student {
  char name[100];
  int number;
  float averageGrade;
};

int main(void) {

  struct student s1;
  s1.number = 5;
  s1.averageGrade = 5.5;
  strcpy(s1.name, "Ivan");

  printf("%s\n", s1.name);
  printf("%d\n", s1.number);
  printf("%f\n", s1.averageGrade);

  return 0;
}