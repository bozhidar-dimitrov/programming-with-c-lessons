#include <stdio.h>

double mul(double x, double y) {
  return x * y;
}

typedef unsigned long long ull; 

typedef double (*Fptr)(double, double);

enum Weekday {
  WEDNESDAY,
  THURSDAY
};

union Test {
  int a;
  float b;
};

typedef struct Student {
  char name[10];
  int age;
} student;

int main(void) {
  struct Student ivan;
  ull x;
  Fptr p = mul;
  
  enum Weekday day = WEDNESDAY;

  return 0;
}