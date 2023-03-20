#include <stdio.h>

typedef unsigned short us;

enum weekend {
  SUNDAY,
  SATURDAY
};

typedef enum {
  true = 1,
  false = 0
} bool;

struct Student {
  int number;
  char name[30];
};

int main(void) {

  us a = 5;

  bool isSunny = false;

  struct Student ivan;
  ivan.number = 5;

  return 0;
}