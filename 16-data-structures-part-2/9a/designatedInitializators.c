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

  int arr[10] = {[1] = 5, [4] = 7, [7 ... 9] = 3};
  for (int i = 0; i < 10; i++) {
    printf("[%d] = %d\n", i,  arr[i]);
  }

  int arr1[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  //Alternative syntax
  int arr3[10] = {[1] 5, [4]7, [7 ... 9]3};
  for (int i = 0; i < 10; i++) {
    printf("[%d] = %d\n", i,  arr3[i]);
  }

  Student student = {
    .averageGrade = 5.5, 
    .fullName = "Martin", 
    .number = 1
  };

  //Alternative syntax
  Student student2 = {
    averageGrade : 5.5, 
    fullName : "Martin", 
    number : 1
  };

  return 0;
}