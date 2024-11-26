#include <stdio.h>

int main(void) {

  //0000 0110
  char a = 6;
  printf("a = %d\n", a);

  //One's complement - обратен код
  //One's complement of 6 - 1111 1001
  //One's complement of 0 - 0000 0000 (+0) == 1111 1111 (-0)
  //256 - 2 = 254 == range(-127, +127) 0-127 - positive numbers, 128-254 - negative numbers

  //Тwo's complement - допълнителен код
  //Two's complement = One's complement + 1 =>
  //Two's complement of 6 = One's complement of 6 + 1 =>
  //Two's complement of 6 = 1111 1001 + 1 =>
  //Two's complement of 6 = 1111 1010
  //Two's complement of 0 = 1111 1111 + 1 => 0000 0000
  //256 - 1 (for the zero) = 255 different numbers => range(-128, 127) => 0-127 - positive numbers, 128-255 - negative numbers
  
  //Most compilers use two's complement:
  char a1 = 250;
  printf("a = %d\n", a1);

  //Sign magnitude representation (SMR) - знаков бит
  //The most significant bit play the role of the sign
  //1 - means "-", 0 - means - "+"
  //SMR of -6 = 1000 0110
  //SMR of 0 = 1000 0000 => means -0
  //256 numbers - 2 (for the +0 and -0) => 254 non zero numbers => 
  //=> range(-127, +127) => 0 - 127 - positive numbers, 128-254 - negative numbers

  return 0;
}