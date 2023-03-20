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

  

  return 0;
}