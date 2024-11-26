#include <stdio.h>

int main(void) {

  //0000 0110
  char a = 6;
  printf("%d\n", a);

  //One's complement (OC) - обратен код
  //One's complement of 6 = 1111 1001
  //range(1, 127) - 1, 2, 3, 4, 5, 6, ... 127
  //range(128, 254) - -127, -126, -125... -1 
  //One's complement of +0 (0000 0000) = (-0) 1111 1111

  //Two's complement (TC) - допълнителен код
  //TC = OC + 1
  //TC of 6 = OC of 6 + 1
  //TC of 6 = 1111 1001 + 1
  //TC of 6 = 1111 1010 (250 in decimal)
  //TC of 0 (0000 0000) = 1111 1111 + 1 == 0000 0000
  //=> +0, -0 == 0000 0000
  //=> (-128, +127) == (256 - 1) / 2 

  //TC is used on my compiler and OS
  char a1 = 250;
  printf("%d\n", a1);

  //Sign magnitude representation (SMR) - знаков бит
  //The most significant bit plays the role of the sign:
  //1 - "-", 0 - "+"
  //SMR of 6 = 1000 0110 (-6)
  //+0 == 0000 0000, -0 == 1000 0000 =>
  //range(-127, +127) (we have two numbers for the zero) == (256 - 2) / 2

  return 0;
}