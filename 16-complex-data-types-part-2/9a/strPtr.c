#include <stdio.h>

#define MAX_NAME_LENGTH 100

typedef struct student {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;

void printStudent(Student student) {
  printf("---------------------\n");
  printf("Number: %u\n", student.number);
  printf("Full name: %s\n", student.fullName);
  printf("Average grade: %.2f\n", student.averageGrade);
  printf("---------------------\n");
}

void printStudentPtr(Student * student) {
  printf("---------------------\n");
  printf("Number: %u\n", (*student).number);
  printf("Full name: %s\n", (*student).fullName);
  printf("Average grade: %.2f\n", (*student).averageGrade);
  printf("---------------------\n");
}

int main(void) {

  Student georgi = {
    .fullName = "Georgi Ralchev",
    .number = 9,
    .averageGrade = 5
  };
  printStudent(georgi);

  Student * ptr = &georgi;
  printStudentPtr(ptr);

  return 0;
}