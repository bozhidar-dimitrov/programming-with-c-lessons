#include <stdio.h>

typedef unsigned const long long ucll;

typedef ucll (*FunctionPtr)(ucll, ucll);

typedef int (*IntArr4Ptr)[4];

typedef const ucll * const CnstUcllPtrToCnst;

struct student {
  char fullname[200];
  int numberInClass;
};

typedef struct {
  char fullname[200];
  int numberInClass;
} Student;

ucll sum(ucll a, ucll b) {
  ucll result = a + b;
  return result; 
}


int main(void) {

  ucll a = 15;
  ucll b = 30; 

  ucll sumOfTwo = sum(a, b);
  printf("%llu\n", sumOfTwo);

  //size_t is alias:
  size_t sizeOfInt = sizeof(int);

  FunctionPtr fncPtr = sum;
  ucll sumOfTwo2 = fncPtr(a, b);
  printf("%llu\n", sumOfTwo2);

  int arr[4] = {1, 2, 3, 4};
  IntArr4Ptr arrPtr = &arr;
  
  CnstUcllPtrToCnst cnstPtrToAConst = &a;

  //We need to use the "struct" keyword here
  struct student ivan;

  //Here we don't need to use the "struct" keyword
  Student martin;

  return 0;
}