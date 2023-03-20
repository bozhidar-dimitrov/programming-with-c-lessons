#include <stdio.h>

typedef struct {
  int number;
  char name[30];
} Student;

int main(void) {

  Student nikolai = {name: "Nikolai", number: 25};
  Student student = nikolai;

  Student * strptr = &nikolai;
  printf("%d \n", (*strptr).number);
  printf("%d \n", strptr->number);

  return 0;
}