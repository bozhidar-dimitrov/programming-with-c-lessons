#include <stdio.h>
#include <string.h>

typedef struct {
  int number;
  char name[50];
  float averageSuccess;
} Student;

int main(void) {

  Student petar;
  petar.number = 20;
  petar.averageSuccess = 6;
  strcpy(petar.name, "Petar");

  printf("Number:%d\n", petar.number);
  printf("Name:%s\n", petar.name);
  printf("AverageSuccess: %f\n", petar.averageSuccess);

  return 0;
}