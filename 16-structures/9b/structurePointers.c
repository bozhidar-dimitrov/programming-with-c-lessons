#include <stdio.h>

#define MAX_NAME_LENGTH 50

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

void printStudent(Student student) {
  printf("-----------------------\n");
  printf("Number: %hu\n", student.number);
  printf("Name: %s\n", student.name);
  printf("AverageGrade: %f\n", student.averageGrade);
  printf("-----------------------\n");
}

void printStudentByPtr(Student * student) {
  printf("-----------------------\n");
  printf("Number: %hu\n", (*student).number);
  printf("Name: %s\n", (*student).name);
  printf("AverageGrade: %f\n", (*student).averageGrade);
  printf("-----------------------\n");
}

void printStudentByPtr2(Student * student) {
  printf("-----------------------\n");
  printf("Number: %hu\n", student->number);
  printf("Name: %s\n", student->name);
  printf("AverageGrade: %f\n", student->averageGrade);
  printf("-----------------------\n");
}

int main(void) {

  Student petar = {
    .number = 20,
    .name = "Petar",
    .averageGrade = 5.4
  };

  printStudent(petar);
  printStudentByPtr(&petar);
  printStudentByPtr2(&petar);

  return 0;
}