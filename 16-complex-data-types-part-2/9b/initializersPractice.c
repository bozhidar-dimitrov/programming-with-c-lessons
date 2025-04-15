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

  Student aleksandar = {
    .number = 1,
    .fullName = "Aleksandar",
    .averageGrade = 5.5
  };

  Student boris = {
    .number = 2,
    .fullName = "Boris",
    .averageGrade = 5.75
  };

  Lesson lesson1 = {
    .teacher = {
      .fullName = "Radostina",
      .teachingSubject = "Informatics"
    },
    .durationInMinutes = 40,
    .theme = "Google sheets"
  };

  Lesson lesson2 = {
    .teacher = {
      .fullName = "Peronika",
      .teachingSubject = "English"
    },
    .durationInMinutes = 40,
    .theme = "Unit 8"
  };

  Lesson lesson3 = {
    .teacher = {
      .fullName = "Bozhidar",
      .teachingSubject = "C programming"
    },
    .durationInMinutes = 40,
    .theme = "Complex data types - part 2"
  };

  Lesson lesson4 = {
    .teacher = {
      .fullName = "Dimcho",
      .teachingSubject = "Entrepreneurship"
    },
    .theme = "Project Management"
  };

  DaySchudule tuesdayEven = {
    .day = TUESDAY,
    .lessonsCount = 8,
    .lessons = {
      [0] = lesson1,
      [1] = lesson1,
      [2] = lesson2,
      [3] = lesson2,
      [4] = lesson3,
      [5] = lesson3,
      [6] = lesson4,
      [7] = lesson4
    }
  };

  StudentClass studentClass = {
    .classNumber = 9,
    .classLetter = 'b',
    .students = {
      [0] = aleksandar,
      [1] = boris,
      [2] = {
        .fullName = "Borislav",
        .number = 3,
        .averageGrade = 5.5
      }
    }
  };

  return 0;
}