#include <stdio.h>

int main(void) {

  //6 - 0000 0110
  char a = 6;

  //One's complement - обратен код
  //One's complement of 6 - 1111 1001
  //One's complement of +0 = 0000 0000
  //One's complement of -0 = 1111 1111
  //8 bits == 256 different numbers - 2 for (+0, -0) = 254 numberds == -127 - -0, +0 - 127

  //Two's complement - допълнителен код
  //Two's complement = One's complement + 1 =>
  //Two's complement of 6 = One's complement of 6 + 1
  //Two's complement of 6 = 1111 1001 + 1
  //Two's complement of 6 = 1111 1010
  //Here we have only one 0 = 0000 0000 => This means we have 255 numbers (without 0)=>
  //=> -128 - 0, 0 - +127
  char a1 = 250;
  printf("%d\n", a1);

  //Sign magnitude representation - знаков бит
  //We use 1 for the most significant bit for negative numbers =>
  //=> 6 = 0000 0110 => -6 = 1000 0110
  //Here again we have two 0 (+0, -0) => +0 == 0000 0000, -0 = 1000 0000 =>
  //Here we have again 254 numbers (without the zeros) => range == -127 - -0, +0 - 127

  return 0;
}