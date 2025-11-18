#include <stdio.h>

int main(void) {

  int a = 10;
  a = 15;
  a++;
  printf("%d\n", a);

  const float PI = 3.14;

  //Programing style:
  const int a = 5;
  const int b = 10;
  const int c = a * b;

  printf("%d\n", c);

  //This is not allowed:
  PI = 5.5;
  printf("%f\n", PI);


  return 0;
}