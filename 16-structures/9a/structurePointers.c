#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 3

typedef struct student {
  char name[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;

typedef struct studentClass {
  Student students[MAX_STUDENTS_PER_CLASS];
  char classLetter;
  unsigned int studentsCount;
  unsigned int classNumber;
} StudentClass;

void printStudent(Student student) {
  printf("----------------------\n");
  printf("Number: %d\n", student.number);
  printf("Name: %s\n", student.name);
  printf("Average grade: %f\n", student.averageGrade);
  printf("----------------------\n");
} 

void printStudentByPtr(Student * student) {
  printf("----------------------\n");
  printf("Number: %d\n", (*student).number);
  printf("Name: %s\n", (*student).name);
  printf("Average grade: %f\n", (*student).averageGrade);
  printf("----------------------\n");
} 

void printStudentByPtr2(Student * student) {
  printf("----------------------\n");
  printf("Number: %d\n", student->number);
  printf("Name: %s\n", student->name);
  printf("Average grade: %f\n", student->averageGrade);
  printf("----------------------\n");
} 

int main(void) {

  Student student = {
    .name = "Nikola",
    .number = 22,
    .averageGrade = 5.5
  };

  printStudent(student);
  printStudentByPtr(&student);
  printStudentByPtr2(&student);

  return 0;
}