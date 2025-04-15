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

/* Cannot use the same constant name in different enums
enum workday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
};
*/

enum robotstate {
  TURNED_OFF = 0,
  WORKING = 1,
  CHARGING_THE_BATTERY = 1
};

typedef enum bool {
  true = 1,
  false = 0
} Bool;

int main(void) {

  int inputDay = 0;
  do {
    printf("Please enter the day of the week (1-7):");
    scanf("%d", &inputDay);
  } while (inputDay < 1 || inputDay > 7);

  enum weekday currentDay = MONDAY;
  currentDay = inputDay;

  switch(currentDay) {
    case MONDAY:
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("The robot is working \n");
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging the battery \n");
      break;
    default:
      printf("Invalid input");
      break;
  }

  enum robotstate state = WORKING;
  if (state) {
    printf("Robot is turned on\n");
  } else {
    printf("The robot is turned off\n");
  }

  Bool robotIsWorking = true;
  if (robotIsWorking) {
    printf("The robot is working \n");
  } else {
    printf("The robot is not working\n");
  }

  return 0;
}