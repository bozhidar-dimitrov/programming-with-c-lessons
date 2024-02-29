#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int count = 0;
  printf("Please enter the size of the array:\n");
  scanf("%d", &count);

  //Allocating memory for count elements of type float
  float * grades = (float *)calloc(count, sizeof(float)); 
  if (grades == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  for (int i = 0; i < count; i++) {
    printf("Please enter value for grades[%d]:", i);
    scanf("%f", &grades[i]);
  }

  for (int i = 0; i < count; i++) {
    printf("Grade:grades[%d]:%f\n", i, grades[i]);
  }

  float * averageGrade = (float *)malloc(sizeof(float));
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += grades[i];
  }
  *averageGrade = (float) sum / count;

  printf("The average grade is: %f:\n", *averageGrade);

  //reasaigning the variable without freeing the memory first, loses the address of the allocated memory and causes a memory leak 
  //grades = NULL; //

  //Release the dynamic memory that we don't need anymore
  free(grades);
  free(averageGrade);
  //free(grades); accepts only pointers to an allocated memory. Passing another pointer or a pointer to a memory that is already freed will cause a runtime error.

  return 0;
}