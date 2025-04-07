#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define STUDENTS_IN_CLASS 3

typedef struct student {
  char firstname[MAX_NAME_LENGTH];
  char secondname[MAX_NAME_LENGTH];
  char surname[MAX_NAME_LENGTH];
  int numberInClass;
  float averageGrade;
} Student;

Student newStudent(
  char firstname[MAX_NAME_LENGTH],
  char secondname[MAX_NAME_LENGTH],
  char surname[MAX_NAME_LENGTH],
  int numberInClass,
  float averageGrade
) {
  Student student;
  strcpy(student.firstname, firstname);
  strcpy(student.secondname, secondname);
  strcpy(student.surname, surname);
  student.numberInClass = numberInClass;
  student.averageGrade = averageGrade;

  return student;
}

Student prompStudent(int number) {
  printf("Please enter student's firstname");
  char firstname[MAX_NAME_LENGTH];
  scanf("%s\n", firstname);

  printf("Please enter student's secondname");
  char secondname[MAX_NAME_LENGTH];
  scanf("%s\n", secondname);

  printf("Please enter student's surname");
  char surname[MAX_NAME_LENGTH];
  scanf("%s\n", surname);

  printf("Please enter student's average grade");
  float averageGrade;
  scanf("%lf", averageGrade);
  getchar();

  return newStudent(firstname, secondname, surname, number, averageGrade);
}

int main(void) {
  Student ivan;

  Student students[STUDENTS_IN_CLASS];
  for (int i = 0; i < STUDENTS_IN_CLASS; i++) {
    int number = i + 1;
    Student student = prompStudent(number);
  }
  
  return 0;
}