#include <stdio.h>

int main(void) {

  int a = 5;
  printf("Address of a: %p\n", &a);

  int * p = &a;
  printf("Address of a: %p\n", p);

  //Dereferencing operator
  //Променям стойността на променливата, към която сочи указателя "p"
  *p = 15;
  printf("Value of a: %d\n", a);

  //Reading the value of a trough p
  printf("Value of a: %d\n", *p);

  return 0;
}