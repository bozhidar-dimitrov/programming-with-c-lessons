#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS_PER_CLASS 3

typedef struct student {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

typedef struct studentclass {
  Student students[MAX_STUDENTS_PER_CLASS];
  unsigned short classNumber;
  char classLetter; 
} StudentClass;

int main(void) {

  int arr[10] = {[1] = 3, [4] = 7, [7 ... 9] = 3};
  for (int i = 0; i < 10; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  int arr2[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}