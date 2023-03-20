#include <stdio.h>

typedef struct student {
  int number;
  char name[30];
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
  float startingtime;
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
  Weekday day;
} DaySchedule;

int main(void) {

  

  return 0;
}