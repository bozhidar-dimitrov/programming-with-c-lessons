#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%d", &gradesCount);
  float * grades = (float *)calloc(gradesCount, sizeof(float));
  
  if (grades == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("Please enter grades %d:", i + 1);
    scanf("%f", &grades[i]);
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("grade %d: %f\n", i + 1, grades[i]);
  }

  float * averageGrade = (float *)malloc(sizeof(float));

  float sum = 0;
  for (int i = 0; i < gradesCount; i++) {
    sum += grades[i];
  }
  *averageGrade = sum / gradesCount;

  printf("Average grade:%f\n", *averageGrade);

  int newGradesCount = gradesCount + 3;
  grades = (float *)realloc(grades, newGradesCount * sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  for (int i = gradesCount; i < newGradesCount; i++) {
    printf("Please enter grades %d:", i + 1);
    scanf("%f", &grades[i]);
  }

  for (int i = 0; i < newGradesCount; i++) {
    printf("grade %d: %f\n", i + 1, grades[i]);
  }

  sum = 0;
  for (int i = 0; i < newGradesCount; i++) {
    sum += grades[i];
  }
  *averageGrade = sum / newGradesCount;
  printf("Average grade:%f\n", *averageGrade);

  //shrinking the memory
  grades = (float *)realloc(grades, 2 * sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  for (int i = 0; i < 2; i++) {
    printf("grade %d: %f\n", i + 1, grades[i]);
  }
  
  free(averageGrade);
  free(grades);

  return 0;
}