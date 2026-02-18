#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int studentCount = 0;
  printf("Please enter the number of students in class:");
  scanf("%d", &studentCount);

  //Allocates dynamic memory for our students
  float * students = (float *)calloc(studentCount, sizeof(float));
  //If there is no memory or there is an error malloc
  //returns NULL pointer
  if (students == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = 0; i < studentCount; i++) {
    printf("Enter mark of student %d:", i+1);
    scanf("%f", &students[i]);
  }

  float averageGrade = 0;
  for (int i = 0; i < studentCount; i++) {
    float studentGrade = students[i];
    printf("Student %d has mark %f\n", i+1, studentGrade);
    averageGrade += studentGrade;
  }

  averageGrade /= studentCount;
  printf("Average grade: %f\n", averageGrade);

  int additionalStudents = 3;
  int newStudentsCount = studentCount + additionalStudents;

  float * temp = (float *)realloc(students, sizeof(float) * newStudentsCount);
  if (temp == NULL) {
    free(students);
    printf("Error allocating memory\n");
    exit(1);
  }
  students = temp;


  for (int i = studentCount; i < newStudentsCount; i++) {
    printf("Enter mark of additional student %d:", i+1);
    scanf("%f", &students[i]);
  }

  averageGrade = 0;
  for (int i = 0; i < newStudentsCount; i++) {
    float studentGrade = students[i];
    printf("Student %d has mark %f\n", i+1, studentGrade);
    averageGrade += studentGrade;
  }

  averageGrade /= newStudentsCount;
  printf("New average grade: %f\n", averageGrade);
  
  return 0;
}