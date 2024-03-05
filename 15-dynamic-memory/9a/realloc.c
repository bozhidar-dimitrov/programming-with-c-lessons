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
  float sum = 0;
  for (int i = 0; i < count; i++) {
    sum += grades[i];
  }
  *averageGrade =  sum / count;

  printf("The average grade is: %f:\n", *averageGrade);

  /*
  If we don't use realloc we need to allocate new memory, 
  to transfer the data from the previous memory to the new memory
  and to free the previously allocated memory:

  float * newgrades = (float *)calloc(count + 3, sizeof(float));
  for (int i = 0; i < count; i++) {
    newgrades[i] = grades[i];
  }

  free(grades);
  */

  grades = (float *)realloc(grades, (count + 3)*sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory \n");
    return 1;
  }

  for (int i = count; i < count+3; i++) {
    printf("Please enter value for new newgrades[%d]:", i);
    scanf("%f", &grades[i]);
  }

  sum = 0;
  for (int i = 0; i < count+3; i++) {
    sum += grades[i];
  }
  *averageGrade = sum / (count+3);
  printf("The average grade is: %f:\n", *averageGrade);

  

  grades = (float *)realloc(grades, 2*sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory \n");
    return 1;
  }
  sum = 0;
  for (int i = 0; i < 2; i++) {
    sum += grades[i];
  }
  *averageGrade = sum / 2;
  printf("The average grade is: %f:\n", *averageGrade);

  free(averageGrade);
  free(grades);

  return 0;
}