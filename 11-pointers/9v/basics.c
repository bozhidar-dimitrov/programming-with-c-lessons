#include <stdio.h>

int main(void) {

  int a = 5;
  printf("Address of a: %p\n", &a);

  int * p = &a;
  printf("Address of a: %p\n", p);

  printf("The value of a via p: %d\n", *p);

  //Промени стойността на променливата, към която сочи указателя.
  *p = 15;

  printf("The value of a: %d\n", a);

  return 0;
}