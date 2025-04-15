#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define STUDENTS_PER_CLASS 27
#define MAX_SUBJECT_NAME_LENGTH 120
#define MAX_THAME_NAME_LENGTH 300
#define MAX_LESSONS_PER_DAY 10

typedef struct {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

typedef struct studentclass {
  unsigned short classNumber;
  unsigned char classLetter;
  Student students[STUDENTS_PER_CLASS];
} StudentClass;

typedef struct lesson {
  StudentClass studentClass;
  struct {
    char fullName[MAX_NAME_LENGTH + 1];
    char teachingSubject[MAX_SUBJECT_NAME_LENGTH + 1];
  } teacher;
  unsigned short durationInMinutes;
  char thame[MAX_THAME_NAME_LENGTH + 1];
} Lesson;

typedef struct dayschedule {
  Lesson lessons[MAX_LESSONS_PER_DAY];
  unsigned short lessonsCount;
  enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
  } day;
} DaySchedule;

typedef enum bool {
  false,
  true
} Bool;

typedef struct weekschedule{
  Bool isOddWeek;
  DaySchedule dayschedules[5];
} WeekSchedule;

int main(void) {

  struct {
    char name[100];
    char address[300];
  } school;

  return 0;
}