#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

typedef struct studentclass {
  int grade;
  char classname;
  Student students[26];
} StudentClass;

typedef struct teacher {
  char name[30];
  char teachingsubject[30];
} Teacher;

typedef struct activity {
  Teacher teacher;
  StudentClass studentclass;
  float startingTime;
  int durationinminutes;
} Activity;

typedef enum weekday {
  SUNDAY,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
} Weekday;

typedef struct dayschedule {
  Activity activities[8];
  Weekday weekday;
} DaySchedule;

int main(void) {

  

  return 0;
}