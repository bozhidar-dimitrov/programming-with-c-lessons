#include <stdio.h>

int main(void) {

  //0000 0110 (6 in binary) (min:0;max:255)
  char a = 6;
  
  //0000 0000 - 0, 1111 1111 -0
  //1's complement - обратен код (negates the number) (min:-126; max: 126)
  //0000 0110 - (6 in binary)
  //1111 1001 - (-6 in 1's complement) 


  //(min:-127;max:126) 0000 0000 = 0 and -0
  //2's complement - допълнителен код = 1's complement + 1
  //0000 0110 - (6 in binary)
  //1111 1001 - (1's complement)
  //1111 1010 - (-6 in 2's complement) 255 / 2 0 - 126 - положителни, 127-255 - да са отрицателни

  //min(min:-126:max:126)
  //sign magnitute representation (SMR)
  //0000 0110 - (6 in binary)
  //1000 0110 - (-6 in SMR)

  return 0;
}