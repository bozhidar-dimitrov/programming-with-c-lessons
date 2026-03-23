#include <stdio.h>

typedef float (*FunctionPtr)(int, double);

enum Weekday {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

int main(void) {

  enum Weekday day = MONDAY;

  return 0;
}