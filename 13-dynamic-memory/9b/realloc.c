#include <stdio.h>
#include <stdlib.h>

int main(void) {

  unsigned int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%u", &gradesCount);

  float * grades = (float *)calloc(gradesCount, sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory\n");
    exit(1); //
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
    //scanf("%f", grades + i); //Alternative variant
  }

  float sum = 0;
  for (int i = 0; i < gradesCount; i++) {
    printf("Grade %d: %f\n", i+1, grades[i]);
    sum += grades[i];
  }

  float averageGrade = sum / gradesCount;
  printf("Average grade:%f\n", averageGrade);

  unsigned int additionalGradesCount = 0;
  printf("Please enter the number of additional grades:");
  scanf("%u", &additionalGradesCount);

  int totalGradesCount = gradesCount + additionalGradesCount;

  grades = (float *)realloc(grades, totalGradesCount * sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory\n");
    exit(1); //
  }

  for (int i = gradesCount; i < totalGradesCount; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
  }

  sum = 0;
  for (int i = 0; i < totalGradesCount; i++) {
    printf("Grade %d: %f\n", i+1, grades[i]);
    sum += grades[i];
  }

  averageGrade = sum / totalGradesCount;
  printf("Average grade:%f\n", averageGrade);

  return 0;
}