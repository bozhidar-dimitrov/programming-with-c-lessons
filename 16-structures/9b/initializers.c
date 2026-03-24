#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 3

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

typedef struct {
  Student students[MAX_STUDENTS_PER_CLASS];
  unsigned short studentsCount;
  char classLetter;
  unsigned short classNumber;
} StudentClass;

int main(void) {

  //Initializing array using array literal (array initializer)
  int arr[3] = {1, 2, 3};
  for (int i = 0 ; i < 3; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr1[1000];
  for (int i = 0 ; i < 1000; i++){
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr2[5] = {1, 2, 3};
  for (int i = 0 ; i < 5; i++){
    printf("%d ", arr2[i]);
  }
  printf("\n");

  int arr3[100] = {0};
  for (int i = 0 ; i < 100; i++){
    printf("%d ", arr3[i]);
  }
  printf("\n");

  Student stefan;
  stefan.number = 22;
  stefan.averageGrade = 5.5;
  strcpy(stefan.name, "Stefan");

  Student georgi = {"Georgi", 10, 5.5};

  StudentClass b9 = {
    {
      stefan, 
      georgi, 
      {
        "Deya", 
        12, 
        5.5
      }
    },
    3,
    'b',
    9
  };

  return 0;
}