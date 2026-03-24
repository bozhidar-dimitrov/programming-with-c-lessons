#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 27
#define MAX_TEACHER_NAME_LENGTH 50
#define TEACHING_SUBJECT_NAME_LENGTH 30
#define MAX_LESSONS_PER_DAY 8
#define STUDY_DAYS 5
#define THEME_MAX_LENGTH 60
#define CLASSES_PER_YEAR 20
#define MAX_SCHOOL_NAME_LENGTH 100
#define MAX_ADDRESS_LENGTH 100

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;

typedef struct {
  Student students[MAX_STUDENTS_PER_CLASS];
  char classLetter;
  unsigned int studentsCount;
  unsigned int classNumber;
} StudentClass;


typedef struct {
  struct {
    char name[MAX_TEACHER_NAME_LENGTH + 1];
    char teachingSubject[TEACHING_SUBJECT_NAME_LENGTH + 1];
  } teacher;
  char lessonTheme[THEME_MAX_LENGTH + 1];
  unsigned int durationInMinutes;
} Lesson;

typedef enum {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
} Workday;

typedef struct {
  unsigned int hour;
  unsigned int minutes;
  unsigned int seconds;
} Time;

typedef struct {
  Lesson lessons[MAX_LESSONS_PER_DAY];
  Workday day;
  Time startTime;
} DaySchedule;

typedef struct {
  DaySchedule days[STUDY_DAYS];
} WeekSchedule;

typedef struct {
  WeekSchedule oddWeekSchedule;
  WeekSchedule evenWeekSchedule;
  StudentClass studentClass;
} ClassSchedule;

int main(void) {

  struct {
    ClassSchedule classSchedules[CLASSES_PER_YEAR];
    char name[MAX_SCHOOL_NAME_LENGTH + 1];
    char address[MAX_ADDRESS_LENGTH + 1];
  } tues;

  return 0;
}