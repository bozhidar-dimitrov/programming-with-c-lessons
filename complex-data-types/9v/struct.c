#include <stdio.h>

struct Student {
  char name[30];
  int grade;
  int number;
  float avggrade;
};

typedef struct Teacher {
  char name[30];
  int teachingInGrade;
} teacher;

void printStudent(char name[30], int grade, int number, float avggrade) {
  //Implementation
}

void printStudentBetter(struct Student student) {
  printf("Name:%s\n", student.name);
  printf("Grade:%d\n", student.grade);
}

int main(void) {

  teacher teacher1;

  return 0;
}