#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 3

typedef struct student {
  char name[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;

typedef struct studentClass {
  Student students[MAX_STUDENTS_PER_CLASS];
  char classLetter;
  unsigned int studentsCount;
  unsigned int classNumber;
} StudentClass;

int main(void) {

  int arr[3] = {[1] = 7, [0] = 3};
  for (int i = 0; i < 3; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr1[10] = {[1] = 7, [0] = 3, [4 ... 7] = 99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr2[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  //Alternative syntax (not supported by all compilers:)
  int arr3[10] = {[1]7, [0]3, [4 ... 7]99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");

  int numberInClass = 10;

  Student daniel = {
    .number = numberInClass, 
    .name = "Daniel", 
    .averageGrade = 5.5
  };

  //Alternative syntax (not supported by all compilers):
  Student georgi = {
    number:10, 
    name:"Georgi", 
    averageGrade:5.5
  };

  StudentClass studentClass = {
    .studentsCount = 3,
    .students = {
      [1] = {
        .name = "Petar",
        .number = 23,
        .averageGrade = 5.5
      },
      [2] = {
        .name = "Stefan",
        .number = 26,
        .averageGrade = 5.5
      },
      [0] = {
        .name = "Viktoria",
        .number = 8,
        .averageGrade = 5.5
      }
    },
    .classNumber = 9,
    .classLetter = 'a'
  };
  
  return 0;
}