#include <stdio.h>

enum Workday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
};

struct student {
  char name[16];
  int number;
  float averageGrade;
};

typedef int (*FunctionPtr)(int, int);

union simple {
  float x;
  int y;
};

int main(void) {

  enum Workday today = MONDAY;

  struct student nikol;
  nikol.number = 21;

  union simple simpleUnion;
  simpleUnion.x = 15;

  return 0;
}