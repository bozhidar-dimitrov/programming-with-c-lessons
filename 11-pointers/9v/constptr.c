#include <stdio.h>


void foo(const char * a) {
  //Forbidden
  //a[0] = 'A';
}

int main(void) {

  const int a = 5;
  
  //Not allowed:
  //a = 15;

  //Normal pointer:
  int * p = &a;
  //Very bad practice:
  *p = 15;
  printf("%d\n", a);

  //Pointer to a constant:
  const int * p1 = &a;

  //Not allowed:
  //*p1 = 30;

  int b = 40;

  //Allowed:
  p1 = &b;

  char name[] = "Ivan";
  foo("Ivan");
  printf("%s\n", name);

  //Constant pointer
  int * const p2 = &b;

  //Allowed:
  *p2 = 15;

  //Not allowed:
  //p2 = &a;

  //Constant pointer to a constant:
  const int * const p3 = &a;

  //Not allowed:
  //*p3 = 15;

  //Not allowed:
  //p3 = &b;

  return 0;
}
