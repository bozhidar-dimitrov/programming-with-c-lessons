#include <stdio.h>
#include <stdlib.h>


int main(void) {

  int studentCount = 0;
  printf("Please enter the number of students in class:");
  scanf("%d", &studentCount);

  //Allocates dynamic memory for our students
  float * students = (float *)malloc(sizeof(float) * studentCount);
  //If there is no memory or there is an error malloc
  //returns NULL pointer
  if (students == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  //If we forgot to free the memory before reassigning the pointer:
  //free(students)
  //We recieve a memory leak.

  students = (float *)malloc(sizeof(float)*50);
  if (students == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }



  return 0;
}