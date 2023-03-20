#include <stdio.h>

typedef struct {
  int number;
  char name[30];
} Student;

typedef struct {
  int grade;
  char classname;
  Student students[3];
} StudentClass;

typedef struct {
  struct {
    char name[30];
    char teachingsubject[30];
  } teacher;
  StudentClass studentclass;
  float startingtime;
  int durationinminutes;
} Activity;

typedef struct {
  Activity activities[8];
  enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  } day;
} DaySchedule;

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  char name[] = "Ivan";

  Student alexandar = {2, "Alexandar"};
  printf("Name: %s \n", alexandar.name);

  StudentClass studentClass = {9, 'a', {alexandar, {3, "Boyan"}, {5, "Lilia"}}};
  printf("Name: %s \n", studentClass.students[1].name);

  //Dedicated - Определени (Непозиционни)
  int arr2[10] = {[3] = 5, [5] = 7, [7 ... 9] = 3};
  int arr3[10] = {[3]5, [5]7, [7 ... 9]3}; //Equivalent to the upper initialization
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr2[i]);
  }

  Student maria = {.name = "Maria", .number = 3};
  Student lora = {name: "Maria", number: 4};

  StudentClass a9class = {
    classname: 'a',
    grade: '9',
    students: {
      [1] = lora,
      [0] = maria,
      [2] = {
        name: "Evgenii",
        number: 13
      }
    }
  };

  printf("%s \n", a9class.students[0].name);

  return 0;
}