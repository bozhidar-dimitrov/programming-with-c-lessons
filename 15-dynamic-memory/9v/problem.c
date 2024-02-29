#include <stdio.h>

int main(void) {

  int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%d", &gradesCount);

  //Doesn't work in all compilers
  float grades[gradesCount];

  return 0;
}