#include <stdio.h>
#include <stdlib.h>

int main(void) {

  unsigned int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%u", &gradesCount);

  //We need to create array of type float with gradesCount elements
  float * grades = (float *)calloc(gradesCount, sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory");
    //Terminates the program immediatly
    exit(1);
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
    //scanf("%f", grades + i); Alternatively
  }

  unsigned int additionalGradesCount = 3;
  unsigned int newGradesCount = gradesCount + additionalGradesCount;

  grades = (float *)realloc(grades, sizeof(float) * newGradesCount);
  if (grades == NULL) {
    printf("Error allocating memory");
    //Terminates the program immediatly
    exit(1);
  }

  for (int i = gradesCount; i < newGradesCount; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
    //scanf("%f", grades + i); Alternatively
  }

  float sum = 0;
  for (int i = 0; i < newGradesCount; i++) {
    printf("Grade %d:%f\n", i+1, grades[i]);
    sum += grades[i];
    //scanf("%f", grades + i); Alternatively
  }

  float averageGrade = sum / newGradesCount;
  printf("Average grade: %f\n", averageGrade);

  //We want now to delete the last two grades:
  newGradesCount -= 2;
  grades = realloc(grades, newGradesCount * sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory");
    //Terminates the program immediatly
    exit(1);
  }

  sum = 0;
  for (int i = 0; i < newGradesCount; i++) {
    printf("Grade %d:%f\n", i+1, grades[i]);
    sum += grades[i];
    //scanf("%f", grades + i); Alternatively
  }

  averageGrade = sum / newGradesCount;
  printf("Average grade: %f\n", averageGrade);

  return 0;
}