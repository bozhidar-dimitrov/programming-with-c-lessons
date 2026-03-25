#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS_PER_CLASS 3
#define MAX_TEACHER_NAME_LENGTH 50
#define TEACHING_SUBJECT_NAME_LENGTH 30
#define MAX_LESSONS_PER_DAY 4
#define STUDY_DAYS 2
#define THEME_MAX_LENGTH 60
#define CLASSES_PER_YEAR 2
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
  char name[MAX_TEACHER_NAME_LENGTH + 1];
  char teachingSubject[TEACHING_SUBJECT_NAME_LENGTH + 1];
} Teacher;

typedef struct {
  Teacher teacher;
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

typedef struct {
    ClassSchedule classSchedules[CLASSES_PER_YEAR];
    char name[MAX_SCHOOL_NAME_LENGTH + 1];
    char address[MAX_ADDRESS_LENGTH + 1];
} School;

int main(void) {

  Teacher peronika = {
    .name = "Peronika",
    .teachingSubject = "English"
  };

  Teacher lidia = {
    .name = "Lidia",
    .teachingSubject = "Math"
  };

  Teacher bozhidar = {
    .name = "Bozhidar",
    .teachingSubject = "Programming"
  };

  Lesson lesson1 = {
    .lessonTheme = "Data structures",
    .teacher = bozhidar,
    .durationInMinutes = 40
  };

  Lesson lesson2 = {
    .lessonTheme = "Podobni triagalnici",
    .teacher = lidia,
    .durationInMinutes = 40
  };

  Lesson lesson3 = {
    .lessonTheme = "Mixed conditionals",
    .teacher = peronika,
    .durationInMinutes = 40
  };

  School school = {
    .name = "TUES",
    .address = "Rosario 1",
    .classSchedules = {
      {
        .studentClass = {
          .classNumber = 9,
          .classLetter = 'a',
          .studentsCount = 3,
          .students = {
            [0] = {
              'Aleksandar', 1, 5.5
            },
            [1] = {
              .name = 'Aleksandar',
              .number = 2,
              .averageGrade = 5.5
            },
            [2] = {
              .name = 'Alina',
              .number = 3,
              .averageGrade = 5.5
            }
          }
        },
        .oddWeekSchedule = {
          .days = {
            [0] = {
              .day = MONDAY,
              .lessons = {
                lesson1,
                lesson1,
                lesson2,
                lesson2
              },
              .startTime = {
                .hour = 1,
                .minutes = 30
              }
            },
            [0] = {
              .day = TUESDAY,
              .lessons = {
                lesson1,
                lesson1,
                lesson3,
                lesson3
              },
              .startTime = {
                .hour = 1,
                .minutes = 30
              }
            },
            [1] = {
              .day = WEDNESDAY,
              .lessons = {
                lesson1,
                lesson1,
                lesson3,
                lesson3
              },
              .startTime = {
                .hour = 1,
                .minutes = 30
              }
            },
          }
        }
      },
      {
          //OPther information
      }
    }
  };

  return 0;
}