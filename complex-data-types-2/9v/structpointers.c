#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

int main(void) {

  Student ivan = {name: "Ivan", number:5};
  Student student2 = ivan;

  Student * student = &ivan;
  printf("%d\n", (*student).number);
  printf("%d\n", student->number);

  return 0;
}