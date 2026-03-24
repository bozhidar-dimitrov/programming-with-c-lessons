#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 27
#define MAX_TEACHER_NAME_LENGTH 50
#define TEACHING_SUBJECT_NAME_LENGTH 30
#define MAX_LESSONS_PER_DAY 8
#define STUDY_DAYS 5
#define THEME_MAX_LENGTH 60

typedef struct student {
  char name[MAX_NAME_LENGTH + 1];
  unsigned int number;
  float averageGrade;
} Student;

typedef struct studentClass {
  Student students[MAX_STUDENTS_PER_CLASS];
  char classLetter;
  unsigned int studentsCount;
  unsigned int classNumber;
} StudentClass;

typedef struct teacher {
  char name[MAX_TEACHER_NAME_LENGTH + 1];
  char teachingSubject[TEACHING_SUBJECT_NAME_LENGTH + 1]
} Teacher;

typedef struct lesson {
  Teacher teacher;
  char lessonTheme[THEME_MAX_LENGTH + 1];
  unsigned int durationInMinutes;
} Lesson;

typedef enum workday {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
} Workday;

typedef struct time {
  unsigned int hour;
  unsigned int minutes;
  unsigned int seconds;
} Time;

typedef struct daySchedule {
  Lesson lessons[MAX_LESSONS_PER_DAY];
  Workday day;
  Time startTime;
} DaySchedule;

typedef struct weekSchedule {
  DaySchedule days[STUDY_DAYS];
} WeekSchedule;

typedef struct classSchedule {
  WeekSchedule oddWeekSchedule;
  WeekSchedule evenWeekSchedule;
  StudentClass studentClass;
} ClassSchedule;

int main(void) {

  return 0;
}