#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradesCount = 0;
  printf("Enter the number of grades: ");
  scanf("%d", &gradesCount);

  //We need an array of n float numbers

  float * grades = (float *)calloc(gradesCount, sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("We must enter grade %d:", i+1);
    scanf("%f", &grades[i]);
    //Alternatively we can use:
    //scanf("%f", grades + i);
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("Grade %d:%.2f\n", i+1, grades[i]);
  }

  float averageGrade = 0;
  for (int i = 0; i < gradesCount; i++) {
    averageGrade += grades[i];
  }
  averageGrade /= gradesCount;

  printf("Average grade: %f\n", averageGrade);

  return 0;
}