#include <stdio.h>

enum weekday {
  SUNDAY,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

enum month {
  JAN = 2,
  FEB,  //Will have value 3
  MAR = 7,
  APR,
  MAY,
  JUN,
  JUL,
  AUG = 15,
  SEP = 17,
  OCT = 5,
  NOV,
  DEC,  //Dec will have the same value as March
};

enum status {
  RUNNING = 0,
  RELAXING = 1,
  BREAK = 1,
};

typedef enum Bool {
  true = 1,
  false = 0
} bool;

// enum workday {
//   MONDAY //Not allowed
// };

int main(void) {

  enum weekday day;
  day = MONDAY;
  day = JAN; //Not good that c allows it - not good practise

  switch (day) {
    case SATURDAY:
    case SUNDAY:
      printf("Time for relax!\n");
      break;
    default:
      printf("Time for school\n");
      break;
  }

  printf("Sunday:%d\n", SUNDAY);
  printf("Wednesday:%d\n", WEDNESDAY);
  printf("Current day:%d\n", day);

  printf("December: %d\n", DEC);
  printf("March:%d\n", MAR);

  enum month currentmonth = MAR;

  enum Bool isSunny = true;
  if (isSunny) {
    printf("It is a good day for a walk outside");
  } else {
    printf("Better to read a book \n");
  }

  bool isRainy = false;

  return 0;
}