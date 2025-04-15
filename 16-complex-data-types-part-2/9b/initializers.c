#include <stdio.h>
#include <string.h>

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

  int arr[3] = {1, 2, 3};
  for (int i = 0; i < 3; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr1[3];
  for (int i = 0; i < 3; i++) {
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

  Student anna;
  anna.number = 1;
  anna.averageGrade = 3.5;
  strcpy(anna.fullName, "Anna Ivanova Georgieva");

  Student nikolai = {"Nikolai Ivanov Dimitrov", 2, 5.75};

  StudentClass studentclass = {
    {
      anna, 
      nikolai, 
      {
        "Dimitar Aleksandrov Atanasov", 
        3, 
        4.75
      }
    },
    9,
    'b'
  };

  return 0;
}