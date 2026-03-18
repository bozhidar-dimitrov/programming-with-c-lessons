#include <stdio.h>

enum DayOfTheWeek {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

//This is not allowed:
/*
enum WorkDay {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
};
*/

enum TestEnum {
  A,
  B = 3,
  C,
  D,
  E = 9,
  F,
  G
};

enum RobotState {
  TURNED_OFF,
  WORKING = 1,
  CHARGING = 1
};

typedef enum bool {
  false,
  true
} Bool;

void printMenu() {
  printf("Please enter a day of the week:\n");
  printf("1 - Monday\n");
  printf("2 - Tuesday\n");
  printf("3 - Wednesday\n");
  printf("4 - Thursday\n");
  printf("5 - Friday\n");
  printf("6 - Saturday\n");
  printf("7 - Sunday\n");
  printf("Your choice:");
}

int main(void) {

  int dayOfTheWeek = 0;
  do {
    printMenu();
    scanf("%d", &dayOfTheWeek);
  } while (dayOfTheWeek < 1 || dayOfTheWeek > 7);

  enum DayOfTheWeek currentDay = dayOfTheWeek;
  enum RobotState state = TURNED_OFF;

  switch(dayOfTheWeek) {
    case MONDAY: 
      printf("The robot is turned off\n");
      state = TURNED_OFF;
      break;
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("The robot is working \n");
      state = WORKING;
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging the battery \n");
      state = CHARGING;
      break;
    default:
      printf("You have entered invalid option \n");
      break;
  }

  printf("A:%d\n", A);
  printf("C:%d\n", C);
  printf("F:%d\n", F);

  if (state == 1) {
    printf("The robot is turned on!\n");
  } else {
    printf("The robot is turned off\n");
  }

  Bool isTheRobotWorking = true;
  if (isTheRobotWorking) {
    printf("The robot is working!\n");
  } else {
    printf("The robot is turned off\n");
  }

  return 0;
}