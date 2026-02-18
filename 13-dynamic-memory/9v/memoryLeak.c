#include <stdio.h>

int main(void) {

  int studentsCount = 0;
  printf("Enter students count: ");
  scanf("%d", &studentsCount);

  //Returns the start address of the newly allocated
  //dynamic memory as void pointer
  float * students = (float *)malloc(sizeof(float) * studentsCount);
  //When there is no memory or there is an error, 
  //the malloc function returns NULL pointer
  //So here the students pointer potentially can be NULL
  if (students == NULL) {
    printf("There is problem in memory allocation \n");
    exit(1);
  }

  //If we forgot to call free:
  //free(students)
  //We loose address of the previous memory and we cannot use it or 
  //release it. This is a memory leak.

  students = (float *)malloc(sizeof(float) * 20);
  if (students == NULL) {
    printf("There is problem in memory allocation \n");
    exit(1);
  }


  return 0;
}