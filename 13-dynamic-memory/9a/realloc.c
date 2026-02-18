#include <stdio.h>
#include <stdlib.h>


int main(void) {

  int studentsCount = 0;
  printf("Enter student's count:");
  scanf("%d", &studentsCount);
  //Returns void pointer to the new dynamic memorys
  float * students = (float *)calloc(studentsCount, sizeof(float));
  //If there is no memory or error it will return NULL
  //So the student's pointer potentially can be NULL
  if (students == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }
  //Here we are sure that the memory is allocated corectly:
  for (int i = 0; i < studentsCount; i++) {
    printf("Enter student's %d mark:", i+1 );
    scanf("%f", &students[i]);
  }

  float averageGrade = 0;
  for (int i = 0; i < studentsCount; i++) {
    float studentsGrade = students[i];
    printf("Student %d has grade: %f\n", i+1, studentsGrade);
    averageGrade += studentsGrade; 
  }

  averageGrade /= studentsCount;
  printf("Average grade: %lf\n", averageGrade);

  int additionalMarksCount = 3;
  //If we pass NULL as first argument - realloc behaves the same as malloc
  float * temp = (float *)realloc(students, sizeof(float) * (studentsCount + additionalMarksCount));
  if (temp == NULL) {
    free(students);
    printf("Error allocating memory \n");
    exit(1);
  }
  students = temp;

  for (int i = studentsCount; i < studentsCount + additionalMarksCount; i++) {
    printf("Enter additional student's %d mark:", i+1 );
    scanf("%f", &students[i]);
  }

  averageGrade = 0;
  for (int i = 0; i < studentsCount + additionalMarksCount; i++) {
    float studentsGrade = students[i];
    printf("Student %d has grade: %f\n", i+1, studentsGrade);
    averageGrade += studentsGrade;
  }

  averageGrade /= (studentsCount + additionalMarksCount);
  printf("Average grade: %lf\n", averageGrade);

  return 0;
}