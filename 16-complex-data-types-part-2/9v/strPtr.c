#include <stdio.h>

#define MAX_NAME_LENGTH 100

typedef struct student {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

void printStudent(Student student) {
  printf("---------------------\n");
  printf("Number: %hd\n", student.number);
  printf("Full name: %s\n", student.fullName);
  printf("Average grade: %f\n", student.averageGrade);
  printf("---------------------\n");
}

void printStudentPtr(Student * student) {
  printf("---------------------\n");
  printf("Number: %hd\n", (*student).number);
  printf("Full name: %s\n", (*student).fullName);
  printf("Average grade: %f\n", (*student).averageGrade);
  printf("---------------------\n");
}

void printStudentPtr2(Student * student) {
  printf("---------------------\n");
  printf("Number: %hd\n", student->number);
  printf("Full name: %s\n", student->fullName);
  printf("Average grade: %f\n", student->averageGrade);
  printf("---------------------\n");
}

int main(void) {

  Student nikola = {
    .fullName = "Nikola Evgeniev Rumenov",
    .number = 1,
    .averageGrade = 5.5
  };

  printStudent(nikola);

  Student * ptr = &nikola;
  printStudentPtr(ptr);
  printStudentPtr2(ptr);

  return 0;
}