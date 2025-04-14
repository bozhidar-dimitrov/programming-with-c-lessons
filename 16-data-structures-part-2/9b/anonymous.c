#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS_PER_CLASS 300
#define MAX_TEACHING_SUBJECT_LENGTH 150
#define MAX_THEME_LENGTH 300
#define MAX_LESSONS_PER_DAY 10
#define WORKDAYS_PER_WEEK 5
#define MAX_SCHOOL_NAME_LENGTH 100
#define MAX_ADDRESS_LENGTH 250
#define CLASSES_PER_YEAR 20

typedef struct {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

typedef struct {
  Student students[MAX_STUDENTS_PER_CLASS];
  unsigned short classNumber;
  char classLetter; 
} StudentClass;


typedef struct {
  struct {
    char fullName[MAX_NAME_LENGTH + 1];
    char teachingSubject[MAX_TEACHING_SUBJECT_LENGTH + 1];
  } teacher;
  char theme[MAX_THEME_LENGTH + 1];
  unsigned short durationInMinutes;
} Lesson;


typedef struct {
  enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
  } day;
  Lesson lessons[MAX_LESSONS_PER_DAY];
  unsigned short lessonsCount;
} DaySchudule;

typedef struct {
  DaySchudule schedules[WORKDAYS_PER_WEEK];
} WeekSchedule;

typedef struct {
  WeekSchedule oddWeek;
  WeekSchedule evenWeek;
  StudentClass studentClass;
} ClassSchedule;

int main(void) {

  struct {
    char name[MAX_SCHOOL_NAME_LENGTH  + 1];
    char address[MAX_ADDRESS_LENGTH + 1];
    ClassSchedule classScehdules[CLASSES_PER_YEAR];
  } school;

  return 0;
}