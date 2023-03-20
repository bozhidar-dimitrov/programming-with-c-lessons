#include <stdio.h>
#include <string.h>

struct Student {
  char name[30];
  int grade;
  int number;
  float avggrade;
};

typedef struct teacher {
  char name[30];
  int teachinginclass;
} Teacher;

void printStudent(char name[], int grade, int number, float avggrade) {
  //Implementation
  //Add code for printing avg grade
}

void printStudent2(struct Student student) {
  printf("%s\n", student.name);
  printf("%d\n", student.grade);
  printf("%d\n", student.number);
  printf("%f\n", student.avggrade);
}

int main(void) {

  char name1[30] = "Ivan";
  int grade1 = 5;
  int number1 = 10;
  float avggrade1 = 10;
  printStudent(name1, grade1, number1, avggrade1);

  struct Student student;
  strcpy(student.name, "Marin");
  student.grade = 6;
  student.number = 19;
  student.avggrade = 5.5;
  printStudent2(student);

  Teacher teacher;
  teacher.teachinginclass = 9;

  return 0;
}