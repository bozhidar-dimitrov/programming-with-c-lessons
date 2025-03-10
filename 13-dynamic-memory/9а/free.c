#include <stdio.h>
#include <stdlib.h>

int main(void) {

  unsigned int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%u", &gradesCount);

  //We need to create array of type float with gradesCount elements
  float * grades = (float *)malloc(gradesCount * sizeof(float));
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

  float sum = 0;
  for (int i = 0; i < gradesCount; i++) {
    printf("Grade %d:%f\n", i+1, grades[i]);
    sum += grades[i];
    //scanf("%f", grades + i); Alternatively
  }

  float averageGrade = sum / gradesCount;
  printf("Average grade: %f\n", averageGrade);

  //Frees the memory that is not needed anymore
  free(grades);

  return 0;
}