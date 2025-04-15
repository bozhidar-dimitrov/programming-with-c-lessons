#include <stdio.h>
#include <string.h>

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

  int arr[3] = {1, 2, 3};

  int arr1[5] = {1, 2, 3};
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr3[100] = {0};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr3[i]);
  }

  printf("\n");

  Student anna;
  anna.averageGrade = 5.5;
  anna.number = 1;
  strcpy(anna.fullName, "Anna Nikolova Atanasova");

  Student kristian = {"Kristian Dimitrov Nikolov", 15, 5.5};

  StudentClass v9 = {
    9,
    'v',
    {
      anna,
      {
        "Ivan Dimitrov Georgiev",
        12,
        4.85
      }
    }
  };

  return 0;
}