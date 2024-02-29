#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%d", &gradesCount);

  //Allocating memory for gradesCount grades of type float:
  float * grades = (float *)calloc(gradesCount, sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory");
    return 1;
  }

  for(int i = 0; i < gradesCount; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("Grade %d: %f\n", i+1, grades[i]);
  }

  float * averageGrade = (float *)malloc(sizeof(float));
  if (averageGrade == NULL) {
    printf("Error allocating memory");
    return 1;
  }

  float sum = 0;
  for (int i = 0; i < gradesCount; i++){
    sum += grades[i];
  }

  *averageGrade = sum / gradesCount;
  printf("Average grade:%f\n", *averageGrade);

  //Causes memory leak - we lose the address of the allocated memory
  //grades = NULL;

  int newGradesCount = gradesCount + 3;
  //Expanding the allocated memory.
  grades = (float *)realloc(grades, sizeof(float) * newGradesCount);
  if (grades == NULL) {
    printf("Error allocating memory");
    return 1;
  }
  for(int i = gradesCount; i < newGradesCount; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
  }

  for (int i = 0; i < newGradesCount; i++) {
    printf("Grade %d: %f\n", i+1, grades[i]);
  }

  sum = 0;
  for (int i = 0; i < newGradesCount; i++){
    sum += grades[i];
  }

  *averageGrade = sum / newGradesCount;
  printf("Average grade:%f\n", *averageGrade);

  //Shrinking the allocated memory memory
  grades = (float *)realloc(grades, sizeof(float) * 2);
  if (grades == NULL) {
    printf("Error allocating memory");
    return 1;
  }

  for (int i = 0; i < 2; i++) {
    printf("Grade %d: %f\n", i+1, grades[i]);
  }

  free(averageGrade);
  free(grades);
  //Trying to free an already freed memory or passing a pointer to a memory that is not allocated via malloc, calloc or realloc will cause a runtime exception in most cases (undefined behaviour)
  //free(grades);

  return 0;
}