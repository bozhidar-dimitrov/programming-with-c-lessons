#include <stdio.h>

int main(void) {

  //1byte = 8bit = 0000 0000 (0000 0001, 0000 0010, 0000 0011 ...) = 256 числа можем да представимю
  //1byte = Мin == 0000 0000 = 0, Max == 1111 1111 == 255
  //char should be able to work with negative numbers so:
  //0 - 127 - we will use for positive numbers
  //128 - 255 - we will use for negative numbers
  //Binary: 0000 0110
  char a = 6;

  //One's complement - обратен код
  //6 in Binary is:           0000 0110
  //One's complement of 6 is: 1111 1001 =>
  //-6 == 1111 1001
  //0 in binary = 0000 0000, 
  //one's complement of 0 = 1111 1111 =>
  //We have two zeros (+0) 0000 0000 and (-0) 1111 1111 =>
  //256 values - 2 for zeros => 254 other values  =>
  //обхвата от стойности е: (-127, 0) и (0, +127) for 1 byte;

  //Two's complement - допълнителен код
  //Two's complement = One's complement + 1;
  //Two's complement of 6 = One's complement of 6 + 1
  //Two's complement of 6 = 1111 1001 + 1
  //Two's complement of 6 = 1111 1010 == (-6)
  //Here we have only one zero: 
  //0 == 0000 0000, Two's complement of 0 == 1111 1111 + 1 = (1) 0000 0000
  //=> In two's complement we have only one zero =>
  //=> 256 - 1 = 255 other values:
  //обхвата на стойности е: (-128, 0) и (0, +127)

  char c1 = 250;
  printf("%d\n", c1);

  //Sign magnitude representation - знаков бит
  //Използваме най-старшия бит за знак: (0) - за плюс, (1) за минус
  //Тоест 6 in Binary = 0000 0110
  //SMR of 6          = 1000 0110
  //Here again we have 2 zeros: 0000 0000 (+0) и 1000 0000 (-0) =>
  //256 - 2 нули = 254 =>
  //=>обхвата от стойности е (-127, 0) и от (0, 127)

  return 0;
}