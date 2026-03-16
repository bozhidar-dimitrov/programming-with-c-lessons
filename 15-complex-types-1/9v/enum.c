#include <stdio.h>

// #define MONDAY 1
// #define TUESDAY 2
// #define WEDNESDAY 3
// #define THURSDAY 4
// #define FRIDAY 5
// #define SATURDAY 6
// #define SUNDAY 7

enum DayOfTheWeek {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

//#define MONDAY _MONDAY

//We cannot reuse the name of the enum value in another enum
//So the following gives the error:
// enum WorkDays{
//   MONDAY = 1,
//   TUESDAY,
//   WEDNESDAY,
//   THURSDAY,
//   FRIDAY
// };

//We can give different constants to enum values
enum TestEnum {
  A,
  B = 3,
  C, // C == 3 + 1 == 4
  D = 9,
  F, // F == 9 + 1 == 10
  G
};

enum RobotState {
  WORKING = 1,
  CHARGING = 1,
  TURNED_OFF = 0
};

typedef enum {
  false,
  true
} bool;

int main(void) {

  int day;
  printf("Please enter the day of the week:");
  scanf("%d", &day);

  // if (day >= MONDAY && day <= FRIDAY) {
  //   printf("The robot is working\n");
  // } else if (day <= SUNDAY) {
  //   printf("The robot is charging the battery\n");
  // }

  enum RobotState state = TURNED_OFF;

  enum DayOfTheWeek currentDay = MONDAY;
  currentDay = day;
  //This expression is broader, but more extendable
  switch (day)
  {
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
      printf("The robot is charging \n");
      state = CHARGING;
      break;  
    default:
      printf("Invalid day of the week\n");
      break;
  }

  printf("%d\n", C);
  printf("%d\n", F);

  if (state) {
    printf("The robot is turned on!\n");
  } else {
    printf("The robot is turned off\n");
  }

  bool isTheRobotWorking = true;
  if (isTheRobotWorking) {
    printf("The robot is working \n");
  } else {
    printf("The robot is not working \n");
  }

  return 0;
}