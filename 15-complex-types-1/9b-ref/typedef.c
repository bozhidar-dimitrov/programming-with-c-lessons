#include <stdio.h>

//Giving second name to an existing type
//It is called typedef alias
typedef int myint;

typedef unsigned const long long ucll;

typedef ucll (*FunctionPtr)(ucll, ucll);

typedef int (*IntArr4Ptr)[4];

typedef const int * const ConstIntPtrToCnst;

ucll sumDistances(
  ucll distanceA, 
  ucll distanceB
) {
  ucll result = distanceA + distanceB;
  return result;
}

int main(void) {

  ucll distanceSoFar;
  ucll newDistance; 

  ucll totalDistance = sumDistances(distanceSoFar, newDistance);
  printf("%llu\n", totalDistance);

  myint a = 5;

  size_t intSize = sizeof(int);

  FunctionPtr fncPtr = sumDistances;
  ucll totalDistance2 = fncPtr(distanceSoFar, newDistance);
  printf("%llu\n", totalDistance2);

  int arr[4] = {1, 2, 3, 4};
  IntArr4Ptr arrPtr = &arr;

  ConstIntPtrToCnst ptr = &a;

  return 0;
}