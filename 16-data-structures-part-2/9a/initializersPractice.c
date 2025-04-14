#include <stdio.h>
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
  Student students[4];
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

  Student anna = {
    .fullName = "Anna",
    .number = 1,
    .averageGrade = 3.3
  };

  Student boris = {
    .fullName = "Boris",
    .number = 2,
    .averageGrade = 5.5 
  };

  Student kristian = {
    .fullName = "Kristian",
    .number = 3,
    .averageGrade = 5.25
  };

  DaySchedule mondaySchedule = {
    .day = MONDAY,
    .lessonsCount = 2,
    .lessons = {
      [0] = {
        .teacher = {
          .fullName = "Dimitar",
          .teachingSubject = "History"
        },
        .durationInMinutes = 40,
        .studentClass = {
          .classLetter = 'a',
          .classNumber = 9,
          .homeroomTeacher = {
            .fullName = "Nikolai",
            .teachingSubject = "BulgarianLanguage"
          },
          .students = {
            [0] = anna,
            [1] = boris,
            [2] = kristian,
            [3] = {
              .fullName = "Ivaylo",
              .averageGrade = 4.3,
              .number = 1
            }
          }
        }
      }
    }
  };

  printf("Name: %s\n", mondaySchedule.lessons[0].studentClass.students[0].fullName);

  return 0;
}