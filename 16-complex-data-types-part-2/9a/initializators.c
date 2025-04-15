#include <stdio.h>

#define MAX_NAME_LENGTH 100

typedef struct {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;

typedef struct studentclass {
  Student students[2];
  unsigned int classNumber;
  unsigned char classLetter;
} StudentClass;

int main(void) {

  int arr[3] = {1, 2, 3};

  int arr2[5] = {1, 2};
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr2[i]);
  }

  printf("\n");

  int arr3[100] = {0};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr3[i]);
  }
  
  Student ivan;
  ivan.averageGrade = 5.5;
  ivan.number = 15;
  strcpy(ivan.fullName, "Ivan Ivanov Ivanov");

  Student anna = {"Anna Nikolova Mihailova", 1, 4.75};

  StudentClass a9 = {
    {
      anna, 
      {"Nikola Dimitrov Ivanov", 2, 5.25}
    }, 
    9, 
    'a'
    };

  return 0;
}