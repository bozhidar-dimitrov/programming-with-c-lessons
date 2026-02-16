#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int studentsCount = 0;
  printf("Enter students count: ");
  scanf("%d", &studentsCount);

  //Returns the start address of the newly allocated
  //dynamic memory as void pointer
  float * students = (float *)malloc(sizeof(float) * studentsCount);
  //When there is no memory or there is an error, 
  //the malloc function returns NULL pointer
  //So here the students pointer potentially can be NULL
  if (students == NULL) {
    printf("There is problem in memory allocation \n");
    exit(1);
  }

  for (int i = 0; i < studentsCount; i++) {
    printf("Enter mark of student %d:", i+1);
    scanf("%f", &students[i]);
    //Can also be written:
    //scanf("%f", students + i);
  }

  float averageGrade = 0;
  for (int i = 0; i < studentsCount; i++) {
    float studentGrade = students[i];
    printf("Student %d has mark: %f\n", i+1, studentGrade);
    averageGrade += studentGrade;
  }

  averageGrade /= studentsCount;
  printf("Average grade: %f\n", averageGrade);

  return 0;
}