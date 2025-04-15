#include <stdio.h>

enum weekday {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

/*
enum workday {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
};
*/

enum robotState {
  TURNED_OFF = 0,
  WORKING = 1,
  CHARGING_BATTERY = 1
};

typedef enum bool {
  true = 1,
  false = 0
} Bool;

int main(void) {
  enum weekday currenday = MONDAY;

  int dayInput = 0;
  do {
    printf("Please enter a day of the week (1 - 7):");
    scanf("%d", &dayInput);
  } while (dayInput < 1 || dayInput > 7);
  currenday = dayInput;
  
  switch (currenday)
  {
    case MONDAY:
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("The robot is working\n");
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging the battery\n");
      break;
  default:
    printf("Invalid day input\n");
    break;
  }

  enum robotState state = CHARGING_BATTERY;

  if (state) {
    printf("The robot is turned on\n");
  } else {
    printf("The robot is turned off\n");
  }

  Bool isWorking = true;
  if (isWorking) {
    printf("The robot is working \n");
  } else {
    printf("The robot is not working \n");
  }

  return 0;
}