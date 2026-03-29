#include <stdio.h>

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

  int arr[5] = {[2] = 7, [0] = 2};
  for (int i = 0 ; i < 5; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr1[10] = {[2] = 7, [0] = 2, [4 ... 7] = 99};
  for (int i = 0 ; i < 10; i++){
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr2[100] = {[0 ... 99] = 1};
  for (int i = 0 ; i < 100; i++){
    printf("%d ", arr2[i]);
  }
  printf("\n");

  //Alternative syntax: works on some compilers (gcc for example)
  int arr3[10] = {[2]7, [0]2, [4 ... 7]99};
  for (int i = 0 ; i < 10; i++){
    printf("%d ", arr3[i]);
  }
  printf("\n");

  Student aleksandar = {
    .number = 3, 
    .name = "Aleksandar", 
    .averageGrade = 5.5 
  };

  //Alternative syntax: works on some compilers (gcc for example)
  Student martin = {
    number: 16, 
    name: "Martin", 
    averageGrade: 5.5 
  };

  StudentClass studentClass = {
    .classNumber = 9,
    .classLetter = 'v',
    .studentsCount = 3,
    .students = {
      [0] = aleksandar,
      [1] = martin,
      [2] = {
        name:"Matey",
        number: 17,
        averageGrade: 5.5
      }
    }
  };

  return 0;
}