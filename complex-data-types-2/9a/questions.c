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

typedef struct student {
  char name[15];
  int number;
  double grade;
} Student;

typedef union test {
  int x;
  float y;
} Test;

int main(void) {

  ull x;
  Fptr a = mul;
  enum Weekday day = SUNDAY; 

  Student ivan;
  strcpy(ivan.name, "Ivan");

  return 0;
}