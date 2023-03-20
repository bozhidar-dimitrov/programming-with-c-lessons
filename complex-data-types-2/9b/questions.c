#include <stdio.h>

double mul(double x, double y) {
  return x * y;
}

typedef unsigned long long ull;

typedef double (*Fptr)(double, double);

enum Weekday {
  SUNDAY,
  MONDAY
};

union Test {
  int a;
  float b;
};

struct student {
  int num;
  char name[30];
};

int main(void) {
  ull x;
  
  Fptr a = mul;
  enum Weekday day = SUNDAY;

  return 0;
}