#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a;

  printf("&a:%p\n", &a);
  printf("p:%p\n", p);

  printf("*p:%d\n", *p);
  printf("a:%d\n", a);

  printf("&p:%p\n", &p);

  //Defining a double pointer
  int **pp = &p;
  printf("pp:%p\n", pp);

  printf("*pp:%p\n", *pp); //prints the address of a
  printf("**pp:%d\n", **pp); //prints the value of a

  //We can declare n-dimensional pointer
  int ***ppp = &pp;

  return 0;
}