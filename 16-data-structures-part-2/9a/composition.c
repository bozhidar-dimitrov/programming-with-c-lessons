#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define SUBJECT_NAME_MAX_LENGTH 100
#define MAX_LESSONS_PER_DAY 8

typedef struct student {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;

typedef struct teacher {
  char fullName[MAX_NAME_LENGTH + 1];
  char teachingSubject[SUBJECT_NAME_MAX_LENGTH + 1];
} Teacher;

typedef struct studentclass {
  Student students[27];
  unsigned int classNumber;
  unsigned char classLetter;
  Teacher homeroomTeacher;
} StudentClass;

typedef struct lesson {
  StudentClass studentClass;
  Teacher teacher;
  unsigned int durationInMinutes;
} Lesson;

typedef enum weekday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
} Weekday;

typedef struct dayschedule {
  Weekday day;
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

  return 0;
}