#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_COUNT 30
#define MAX_SUBJECT_NAME_LENGTH 40
#define MAX_SUBJECT_THEME_NAME_LENGTH 30
#define MAX_LESSONS_PER_DAY 8
#define SCHOOL_DAYS_PER_WEEK 5
#define MAX_ADDRESS_LENGTH 50
#define CLASSES_PER_SCHOOL_YEAR 20

typedef unsigned char unsignedSize;

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  unsignedSize number;
  double averageGrade;
} Student;

typedef struct {
  Student students[MAX_STUDENTS_COUNT];
  unsignedSize numberOfStudents;
  char classLetter;
  unsignedSize classNumber;
} StudentClass;

typedef enum {
  ENGLISH,
  PROGRAMMING,
  MATHS
} Subject;

typedef struct {
  Subject lessonSubject;
  struct {
    char name[MAX_NAME_LENGTH + 1];
    char teachingSubject[MAX_SUBJECT_NAME_LENGTH + 1];
  } teacher;
  char theme[MAX_SUBJECT_THEME_NAME_LENGTH + 1];
  unsignedSize durationInMinutes; 
} Lesson;

typedef enum {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
} WorkDay;

typedef struct {
  unsignedSize hour;
  unsignedSize minutes;
  unsignedSize seconds;
} Time;

typedef struct {
  Lesson lessons[MAX_LESSONS_PER_DAY];
  unsignedSize lessonsCount;
  WorkDay day;
  Time startingTime;
} DaySchedule;

typedef struct {
  DaySchedule daySchedules[SCHOOL_DAYS_PER_WEEK];
} WeekSchedule;

typedef struct {
  WeekSchedule oddWeekSchedule;
  WeekSchedule evenWeekSchedule;
  StudentClass studentClass;
} ClassSchedule;

typedef struct {
  ClassSchedule classSchedules[CLASSES_PER_SCHOOL_YEAR];
} TermSchedule;

int main(void) {

  Student nikola;

  struct {
    char name[MAX_NAME_LENGTH + 1];
    char address[MAX_ADDRESS_LENGTH + 1];
    TermSchedule firstTerm;
    TermSchedule secondTerm;
  } tues;

  return 0;
}