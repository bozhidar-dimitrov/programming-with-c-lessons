#include <stdio.h>
#define MAX_NAME_LENGTH 50

typedef unsigned char unsignedSize;

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  unsignedSize number;
  double averageGrade;
} Student;

void printStudent(Student student) {
  printf("------------------------\n");
  printf("Number: %d\n", student.number);
  printf("Name: %s\n", student.name);
  printf("Average grade: %f\n", student.averageGrade);
  printf("------------------------\n");
}

void printStudentByPtr(Student * student) {
  printf("------------------------\n");
  printf("Number: %d\n", (*student).number);
  printf("Name: %s\n", (*student).name);
  printf("Average grade: %f\n", (*student).averageGrade);
  printf("------------------------\n");
}

void printStudentByPtr2(Student * student) {
  printf("------------------------\n");
  printf("Number: %d\n", student->number);
  printf("Name: %s\n", student->name);
  printf("Average grade: %f\n", student->averageGrade);
  printf("------------------------\n");
}

int main(void) {
  
  Student plamen = {
    .name = "Plamen",
    .averageGrade = 5.5,
    .number = 23
  };

  printStudent(plamen);
  printStudentByPtr(&plamen);
  printStudentByPtr2(&plamen);

  return 0;
}