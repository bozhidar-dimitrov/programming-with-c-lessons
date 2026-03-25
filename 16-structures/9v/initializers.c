#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_COUNT 4

typedef unsigned char unsignedSize;

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  unsignedSize number;
  double averageGrade;
} Student;

typedef struct {
  Student students[MAX_STUDENTS_COUNT];
  unsignedSize numberOfStudents;
  char classLetter;
  unsignedSize classNumber;
} StudentClass;

int main(void) {

  int arr[3] = {1, 2, 3};
  for (int i = 0; i < 3; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr1[1000];
  for (int i = 0; i < 1000; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr2[5] = {1, 2, 3};
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  int arr3[100] = {0};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");

  Student vladislav;
  vladislav.number = 8;
  vladislav.averageGrade = 5.5;
  strcpy(vladislav.name, "Vladislav");

  int number = 21;
  Student mihail = {"Mihail", number, 5.5};

  Student ivan;
  ivan = (Student){
    "Ivan",
    12,
    5.5
  };

  StudentClass studentClass = {
    {
      vladislav, 
      mihail, 
      ivan, 
      {
        "Dimitar", 
        11, 
        5.5
      }
    },
    4,
    'v',
    9
  };

  printf("Mihail average grade: %f\n", studentClass.students[1].averageGrade);

  return 0;
}