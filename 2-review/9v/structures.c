#include <stdio.h>
#include <string.h>

struct Student {
  char name[100];
  float averageGrade;
  int number;
};

int main(void) {

  struct student s1;
  s1.number = 5;
  s1.averageGrade = 5.5;
  strcpy(s1.name, "Ivan");

  printf("Name:%s\n", s1.name);
  printf("Number: %d\n", s1.number);
  printf("Average grade: %f\n", s1.averageGrade);


  return 0;
}