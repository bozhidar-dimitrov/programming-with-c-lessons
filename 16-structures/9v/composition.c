#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_COUNT 30
#define MAX_SUBJECT_NAME_LENGTH 40
#define MAX_SUBJECT_THEME_NAME_LENGTH 30
#define MAX_LESSONS_PER_DAY 8
#define SCHOOL_DAYS_PER_WEEK 5

typedef unsigned char unsignedSize;

typedef struct student {
  char name[MAX_NAME_LENGTH + 1];
  unsignedSize number;
  double averageGrade;
} Student;

typedef struct studentClass {
  Student students[MAX_STUDENTS_COUNT];
  unsignedSize numberOfStudents;
  char classLetter;
  unsignedSize classNumber;
} StudentClass;

typedef struct teacher {
  char name[MAX_NAME_LENGTH + 1];
  char teachingSubject[MAX_SUBJECT_NAME_LENGTH + 1]
} Teacher;

typedef enum subject {
  ENGLISH,
  PROGRAMMING,
  MATHS
} Subject;

typedef struct lesson {
  Subject lessonSubject;
  Teacher teacher;
  char theme[MAX_SUBJECT_THEME_NAME_LENGTH + 1];
  unsignedSize durationInMinutes; 
} Lesson;

typedef enum workDay {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
} WorkDay;

typedef struct time {
  unsignedSize hour;
  unsignedSize minutes;
  unsignedSize seconds;
} Time;

typedef struct daySchedule {
  Lesson lessons[MAX_LESSONS_PER_DAY];
  unsignedSize lessonsCount;
  WorkDay day;
  Time startingTime;
} DaySchedule;

typedef struct weekSchedule {
  DaySchedule daySchedules[SCHOOL_DAYS_PER_WEEK];
} WeekSchedule;

typedef struct classSchedule {
  WeekSchedule oddWeekSchedule;
  WeekSchedule evenWeekSchedule;
  StudentClass studentClass;
} ClassSchedule;

int main(void) {

  return 0;
}