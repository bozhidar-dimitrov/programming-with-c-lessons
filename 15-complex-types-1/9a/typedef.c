#include <stdio.h>

typedef unsigned const long long ucll;

typedef ucll (*FunctionPtr)(ucll, ucll);

typedef const int const * ConstPtrToAConst;

typedef int (*IntArr4Ptr)[4];

struct Student {
  int number;
  char name[30];
};

typedef struct Student2 {
  int number;
  char name[30];
} StudentStruct;

ucll sum(ucll a, ucll b) {
  ucll result = a + b;
  return result;
}

int main(void) {

  ucll a = 15;
  ucll b = 20;

  ucll sumOfTwo = sum(a, b);
  printf("Sum of two: %llu\n", sumOfTwo);

  //Size_t is alias:
  size_t intSize = sizeof(int);

  FunctionPtr fncPtr = sum;
  ucll sumOfTwo2 = fncPtr(a, b);
  printf("Sum of two: %llu\n", sumOfTwo2);

  ConstPtrToAConst p = &a;

  int arr[4] = {1, 2, 3, 4};
  //int (*arrPtr)[4] = &arr;
  IntArr4Ptr arrPtr = &arr;
  
  //We need to use the keyword "struct" here:
  struct Student ivan;

  //Here we don't need to use the "struct" keyword:
  StudentStruct maria;

  return 0;
}