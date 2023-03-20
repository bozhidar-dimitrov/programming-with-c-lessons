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
  FEB, //Will have value 3
  MAR = 7,
  APR, //April will have value 8
  MAY,
  JUN = 15,
  JUL,
  AUG,
  SEP,
  OCT = 5,
  NOV,
  DEC //Will have value 7 (same as March)
};

typedef enum Bool {
  true = 1,
  false = 0,
} bool;

// enum workday {
//   MONDAY // Will cause an error, because MONDAY is already defined.
// };

int main(void) {

  enum weekday currentday;
  currentday = MONDAY;

  switch (currentday) {
    case SATURDAY:
    case SUNDAY: 
      printf("Time for relax\n");
      break;
    default:
      printf("Time for school\n");
  }

  printf("Sunday:%d\n", SUNDAY);
  printf("Current day:%d\n", currentday);

  printf("March:%d\n", MAR);
  printf("December:%d\n", DEC);

  enum Bool isSunny = true;
  if (isSunny) {
    printf("Will have a walk in the mountain\n");
  } else {
    printf("Better to read a book\n");
  }

  bool isRainy = false;

  bool isTrue = 32; //Allowed but, not a good practise
  bool isCold = JAN; //Allowed but, not a good practise

  return 0;
}