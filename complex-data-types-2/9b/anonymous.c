#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

typedef struct {
  int grade;
  char classname;
  Student students[26];
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

  Activity activity;
  strcpy(activity.teacher.name, "Andrei");

  return 0;
}