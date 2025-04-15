#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS_PER_CLASS 300
#define MAX_TEACHING_SUBJECT_LENGTH 150
#define MAX_THEME_LENGTH 300
#define MAX_LESSONS_PER_DAY 10
#define WORKDAYS_PER_WEEK 5

typedef struct student {
  char fullName[MAX_NAME_LENGTH + 1];
  unsigned short number;
  float averageGrade;
} Student;

typedef struct studentclass {
  Student students[MAX_STUDENTS_PER_CLASS];
  unsigned short classNumber;
  char classLetter; 
} StudentClass;

typedef struct teacher {
  char fullName[MAX_NAME_LENGTH + 1];
  char teachingSubject[MAX_TEACHING_SUBJECT_LENGTH + 1];
} Teacher;

typedef struct lesson {
  Teacher teacher;
  char theme[MAX_THEME_LENGTH + 1];
  unsigned short durationInMinutes;
} Lesson;

typedef enum workday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
} Workday;

typedef struct dayschedule {
  Workday day;
  Lesson lessons[MAX_LESSONS_PER_DAY];
  unsigned short lessonsCount;
} DaySchudule;

typedef struct weekschedule {
  DaySchudule schedules[WORKDAYS_PER_WEEK];
} WeekSchedule;

typedef struct classschedule {
  WeekSchedule oddWeek;
  WeekSchedule evenWeek;
  StudentClass studentClass;
} ClassSchedule;

int main(void) {

  

  return 0;
}