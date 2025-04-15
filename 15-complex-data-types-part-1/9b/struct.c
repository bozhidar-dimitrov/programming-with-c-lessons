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

int main(void) {

  Student ivan;
  Student students[STUDENTS_IN_CLASS];

  return 0;
}