#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

int foo(Student student) {
  printf("%s \n", student.name);
}

int bar(Student * student) {
  printf("%s \n", (*student).name);
  printf("%s \n", student->name); //Equivalent to the first instruction
}

int main(void) {

  Student alexandar = {name:"Alexandar", number:2};
  Student student2 = alexandar;

  Student * strptr = &alexandar;

  foo(alexandar);
  

  return 0;
}