#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define SUBJECT_NAME_MAX_LENGTH 100
#define MAX_LESSONS_PER_DAY 8

typedef struct {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;


typedef struct studentclass {
  Student students[27];
  unsigned int classNumber;
  unsigned char classLetter;
  struct {
    char fullName[MAX_NAME_LENGTH + 1];
    char teachingSubject[SUBJECT_NAME_MAX_LENGTH + 1];
  } homeroomTeacher;
} StudentClass;

typedef struct lesson {
  StudentClass studentClass;
  struct {
    char fullName[MAX_NAME_LENGTH + 1];
    char teachingSubject[SUBJECT_NAME_MAX_LENGTH + 1];
  } teacher;
  unsigned int durationInMinutes;
} Lesson;

typedef struct dayschedule {
  enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
  } day;
  Lesson lessons[MAX_LESSONS_PER_DAY];
  unsigned int lessonsCount;
} DaySchedule;

typedef enum bool {
  false,
  true
} Bool;

typedef struct weekschedule {
  DaySchedule daySchedules[5];
} WeekSchedule;

int main(void) {

  Student student;

  struct {
    char name[30];
    char address[100];
  } school;

  return 0;
}