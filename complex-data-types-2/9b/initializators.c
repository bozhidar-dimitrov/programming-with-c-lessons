#include <stdio.h>

typedef struct {
  char name[30];
  int number;
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
  float startingTime;
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
  } weekday;
} DaySchedule;

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  char name[] = "Ivan";

  //Dedicated initializators - Определени / Непозиционни
  int arr2[10] = {[3] = 7, [5] = 8, [7 ... 9] = 3};
  int arr3[10] = {[3]7, [7 ... 9]3, [5]8};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr3[i]);
  }

  //Normal initializors for structs
  Student mihail = {"Mihail", 15};

  StudentClass b9 = {9, 'b', {mihail, {"Iordan", 10}, {"Tsvetelina", 23}}};

  //Dedicated initializators for structs
  Student ivaylo = {.number = 9, .name = "Ivaylo"};
  Student lora = {number: 12, name: "Lora"};

  StudentClass studentclass = {
    classname: 'b',
    grade: 9,
    students: {
      [2] = lora,
      [1] = {
        name: "Anton", 
        number: 4
      },
      [0] = ivaylo
    }
  };

  printf("%s \n", studentclass.students[1].name);

  return 0;
}