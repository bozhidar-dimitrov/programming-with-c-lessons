#include <stdio.h>

int main(void) {

  int a = 5;
  printf("Address of variable a:%p\n", &a);

  int * p = &a;
  printf("Address of variable a:%p\n", p);

  //Derreferencing operator - ще вземе стойността
  //на променливата, към която сочи указателя p.
  printf("Value of a: %d\n", *p);

  //Промени стойността на променливата, към която 
  //сочи указателя "p", на 15.
  *p = 15;

  printf("Value of a: %d\n", a);

  return 0;
}