#include <stdio.h>
#include <string.h>

#define MAX_STUDENT_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 3

typedef struct student {
  char name[MAX_STUDENT_NAME_LENGTH + 1];
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

  Student boris;
  boris.number = 4;
  boris.averageGrade = 5.5;
  strcpy(boris.name, "Boris"); 

  Student nikola = {"Nikola", 22, 5.5};

  StudentClass studentClass = {
    {boris, nikola, {"Elitsa", 13, 5.5}},
    'a',
    3,
    9
  };

  printf("Elitsa's average grade: %f\n", studentClass.students[2].averageGrade);

  return 0;
}