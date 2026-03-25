#include <stdio.h>

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

  int arr[5] = {[2] = 7, [0] = 3};
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr1[10] = {[2] = 7, [0] = 3, [4 ... 7] = 99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr2[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  /*
    Alternative syntax: works on some compilers (gcc for example:)
  */
  int arr4[10] = {[2]7, [0]3, [4 ... 7]99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr4[i]);
  }
  printf("\n");

  Student kris = {
    .number = 1,
    .name = "Kris",
    .averageGrade = 5.5 
  };

  //Alternative syntax: works on some compilers (gcc for example)
  Student boris = {
    number: 1,
    name: "Boris",
    averageGrade: 5.5
  };

  StudentClass studentClass = {
    .classNumber = 9,
    .classLetter = 'v',
    .numberOfStudents = 3,
    .students = {
      [0]kris,
      [1] = boris,
      [2] = {
        .number = 25,
        .averageGrade = 5.5,
        .name = "Stefan"
      }
    }
  };

  return 0;
}