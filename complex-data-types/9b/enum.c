#include <stdio.h>

enum weekday {
  SUNDAY, //0
  MONDAY, //1
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

enum month {
  JAN = 5,
  FEB, //Will have value 6
  MAR,
  APR = 15,
  MAY = 17,
  JUN,
  JUL,
  AUG,
  SEP = 5, //Same value as JAN
  OCT,
  NOV,
  DEC
};

//#define SUNDAY 0
//#define MONDAY 1

typedef enum Status {
  RUNNING,
  WALKING,
  STAYING_STILL,
} Status;

typedef enum bool {
  true = 1,
  false = 0
} bool;

// enum workday {
//   MONDAY //Will cause an error - MONDAY already defined
// };

int main(void) {

  enum weekday currentday;
  currentday = MONDAY;

  switch (currentday) {
    case SUNDAY:
    case SATURDAY:
      printf("Time for relax \n");
      break;
    default:
      printf("Time for school \n");
  };

  printf("Sunday:%d\n", SUNDAY);
  printf("Current day: %d\n", currentday);

  enum month currentmonth = MAR;
  printf("JAN: %d\n", JAN);

  enum month currentmonth2 = 5; //Allowed but bad practise
  enum month currentmonth1 = MONDAY; //Allowed but bad practise

  Status robotstatus = WALKING;

  bool isSunny = true;
  if (isSunny) {
    printf("Will walk outside \n");
  } else {
    printf("Will read a book \n");
  }

  return 0;
}