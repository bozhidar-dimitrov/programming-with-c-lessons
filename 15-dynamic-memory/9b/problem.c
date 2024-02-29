#include <stdio.h>

int main(void) {

  int gradesCount = 0;
  scanf("%d", &gradesCount);

  //Doesn't work on all compilers
  float grades[gradesCount];

  return 0;
}