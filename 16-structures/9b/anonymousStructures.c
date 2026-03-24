#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 30
#define MAX_THEME_LENGTH 70
#define MAX_LESSONS_PER_DAY 8
#define SCHOOL_DAYS_PER_WEEK 5
#define MAX_ADDRESS_LENGTH 90
#define MAX_CLASSES_PER_SCHOOL 20

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

typedef enum {
  ENGLISH,
  PROGRAMMING,
  MATH
} Subject;

typedef struct {
  char theme[MAX_THEME_LENGTH + 1];
  struct {
    char name[MAX_NAME_LENGTH + 1];
    Subject subject;
  } teacher;
  Subject subject;
  unsigned short durationInMinutes;
} Lesson;

typedef struct {
  unsigned short hour;
  unsigned short minutes;
  unsigned short seconds;
} Time;

typedef enum {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
} SchoolDay;

typedef struct {
  Lesson lesson[MAX_LESSONS_PER_DAY];
  Time startingTime;
  SchoolDay day;
} DaySchedule;

typedef struct {
  DaySchedule daySchedule[SCHOOL_DAYS_PER_WEEK];
} WeekSchedule;

typedef struct {
  StudentClass studentClass;
  WeekSchedule oddWeekSchedule;
  WeekSchedule evenWeekSchedule;
} ClassSchedule;

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  char address[MAX_ADDRESS_LENGTH + 1];
  ClassSchedule classSchedules[MAX_CLASSES_PER_SCHOOL];
} School;

int main(void) {

  //struct student ivan;
  Student nikola;

  return 0;
}