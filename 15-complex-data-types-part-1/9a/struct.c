#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define STUDENTS_IN_CLASS 27

typedef struct student {
  char firstname[MAX_NAME_LENGTH];
  char secondname[MAX_NAME_LENGTH];
  char surname[MAX_NAME_LENGTH];
  int number;
  float averageGrade;
} Student;

Student prompStudent(int number) {
  Student student;
  printf("Enter student`s firstname:");
  scanf("%s", student.firstname);

  printf("Enter student`s secondname:");
  scanf("%s", student.secondname);

  printf("Enter student`s surname:");
  scanf("%s", student.surname);

  printf("Enter student`s averageGrade:");
  scanf("%f", &student.averageGrade);

  student.number = number;

  return student;
}

void addStudent(Student student, int index, Student students[]) {
  students[index] = student;
}

void printStudent(Student student) {
  printf("---------------------");
  printf("Number: %d\n", student.number);
  printf("Firstname: %s\n", student.firstname);
  printf("Secondname: %s\n", student.secondname);
  printf("Surname: %s\n", student.surname);
  printf("Average grade: %f\n", student.averageGrade);
  printf("---------------------");
}

int main(void) {
  struct student ivan;

  struct student students[STUDENTS_IN_CLASS];

  Student marin;

  for (int i = 0; i < STUDENTS_IN_CLASS; i++) {
    int number = i + 1;
    Student currentStudent = prompStudent(number);
    addStudent(currentStudent, i, students);
  }

  for (int i = 0; i < STUDENTS_IN_CLASS; i++) {
    Student currentStudent = students[i];
    printStudent(currentStudent);
  }

  return 0;
}