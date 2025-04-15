#include <stdio.h>
#define MAX_NAME_LENGTH 100
#define STUDENTS_PER_CLASS 27

typedef struct student {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

typedef struct studentclass {
  unsigned short classNumber;
  unsigned char classLetter;
  Student students[2];
} StudentClass;

int main(void) {

  int arr[10] = {[1] = 5, [4] = 7, [7 ... 9] = 3};
  for (int i = 0; i < 10; i++) {
    printf("[%d] = %d\n", i, arr[i]);
  }

  int arr1[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  //Alternative syntaxis
  int arr3[10] = {[1]5, [4]7, [7 ... 9]3};
  for (int i = 0; i < 10; i++) {
    printf("[%d] = %d\n", i, arr3[i]);
  }

  Student anna = {
    .number = 1, 
    .fullName = "Anna", 
    .averageGrade = 5.75
  };

  //Alternative syntax
  Student anna1 = {
    number : 1, 
    fullName : "Anna", 
    averageGrade : 5.75
  };

  return 0;
}