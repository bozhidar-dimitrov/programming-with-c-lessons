#include <stdio.h>

int main(void) {

  int a = 5;
  float b = 5.5;
  //This is allowed but we must be careful when we are using it:
  b = a;

  //C types ordered:
  /*
    char
    unsigned char
    short
    unsigned short
    int
    unsigned int
    float 
    long
    unsigned long
    double
    long long
    unsigned long long
    long double
  */

  char a1 = 120;
  //This operation is allowed and safe (int is bigger than char)
  int b1 = a1; 
  printf("%d\n", b1);

  int a2 = 1234;
  //Not safe: int is bigger than char
  char b2 = a2;
  printf("%d\n", b2);

  unsigned char a3 = 250;
  //Not safe:
  char b3 = a3;
  printf("%d\n", b3);

  char a4 = 100;
  //signed to unsigned is not safe despite the fact that it will work here
  unsigned char b4 = a4;
  printf("%d\n", b4);

  char a5 = -8;
  //signed to unsigned is not safe 
  unsigned char b5 = a5;
  printf("%d\n", b5);
   
  int a6 = 5;
  //Integer to real number is allowed if the target type is big enough
  float b6 = a6;
  printf("%f\n", b6);

  float a7 = 5.5;
  int b7 = a7;
  printf("%d\n", b7);

  int a8 = 5;
  int b8 = 2;
  float c8 = a8 / b8;
  printf("%f\n", c8);

  float a9 = 5;
  int b9 = 2;
  float c9 = a9 / b9;
  printf("%f\n", c9);

  return 0;
}