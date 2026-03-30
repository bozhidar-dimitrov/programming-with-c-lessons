#include <stdio.h>

typedef struct {
  char name[50];
  int number;
  float averageGrade;
} Student;

int main(void) {

  Student adriana;

  Student * ptr = &adriana;
  ptr->number;


  return 0;
}