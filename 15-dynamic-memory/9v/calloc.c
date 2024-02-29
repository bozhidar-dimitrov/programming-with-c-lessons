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

  return 0;
}