#include <stdio.h>

enum DayOfTheWeek {
  MONDAY = 1, 
  TUESDAY, //The next values if not initialized takes the previous value + 1
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

//We cannot use the enum constants in other enums:
//so this is not allowed:
// enum WorkDay {
//   MONDAY,
//   TUESDAY,
//   WEDNESDAY,
//   THURSDAY,
//   FRIDAY
// };

//We can put different values for enum Constants
enum TestEnum {
  A,
  B = 4,
  C,
  D = 9,
  E,
  F = 3,
  G
};

enum RobotState {
  WORKING = 1,
  CHARGING = 1,
  TURNED_OFF = 0
};

typedef enum BoolEnum {
  false,
  true
} Bool;

int main(void) {

  int dayOfTheWeek = 0;
  do {
    printf("Please enter a day of the week:");
    scanf("%d", &dayOfTheWeek);
  } while(dayOfTheWeek < 1 || dayOfTheWeek > 7);

  enum DayOfTheWeek currentDay = dayOfTheWeek;

  switch(currentDay) {
    case MONDAY: 
    case TUESDAY: 
    case WEDNESDAY: 
    case THURSDAY: 
    case FRIDAY: 
      printf("The robot is working:\n");
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging the batter \n");
      break;
  }

  enum TestEnum value1 = C;
  printf("%d\n", value1);//prints 5

  enum TestEnum value2 = B;
  printf("%d\n", value2); //prints 5

  enum TestEnum value3 = G;
  printf("%d\n", value2); //This also prints 4

  enum RobotState state = CHARGING;
  if (state) {
    printf("The robot is turned on\n");
  } else {
    printf("The robot is turned off\n");
  }

  Bool isTheRobotWorking = false;
  if (isTheRobotWorking) {
    printf("The robot is working \n");
  } else {
    printf("The robot is not working \n");
  }

  return 0;
}