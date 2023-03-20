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
  float startingtime;
  int duration;
} Activity;

typedef struct {
  Activity activities[8];
  enum weekday {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
  } day;
} DaySchedule;

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  char name[] = "Ivan";

  Student georgi = {"Georgi", 5};
  StudentClass v9 = {9, 'v', {georgi, {"Maria", 10}, {"Nikolai", 7}}};

  printf("Name:%s\n", v9.students[1].name);

  //Dedicated initializators 

  int arr2[10] = {[4] = 5, [7] = 6, [5 ... 9] = 3};
  int arr3[10] = {[4]5, [7]6, [5 ... 9]3};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr2[i]);
  }

  Student alex = {.number = 3, .name = "Alex"};
  Student lilia = {name:"Lilia", number:15};

  StudentClass studentclass = {
    students: {
      alex, 
      lilia, 
      {
        name: "Delqn", 
        number: 17
      }
    }, 
    grade: 9,
    classname: 'v'
  };

  printf("Name 2: %s", studentclass.students[2].name);

  return 0;
}