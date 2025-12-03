#include <stdio.h>

int main(void) {

  //Logical operators
  //Arithmetic
  //Assignement operators
  //Ternery operator
  //Comparison operators

  unsigned char a = 6; //0000 0110
  unsigned char b = 7; //0000 0111

  //Bitwise operators:
  /**
   * & - bitwise and
   * | - bitwise or
   * ~ - bitwise not
   * ^ - bitwise xor
   * << - bitwise left shift
   * >> - bitwise right shift
   */

  /**   Exclusive OR (XOR)
   *    A   B   A ^ B
   *    0   0     0     
   *    0   1     1
   *    1   0     1
   *    1   1     0
   */

  //0000 0110 = a
  //0000 0111 = b
  //0000 0110 = a & b == 6
  unsigned c = a & b;
  printf("%u\n", c);

  //0000 0110 = a
  //0000 0111 = b
  //0000 0111 = a | b == 7
  unsigned c1 = a | b;
  printf("%u\n", c1);

  //0000 0110 = a
  //1111 1001 = ~a == 249
  unsigned char c2 = ~a;
  printf("%u\n", c2);
  
  //0000 0110 = a
  //0000 0111 = b
  //0000 0001 = a ^ b == 1
  unsigned c3 = a ^ b;
  printf("%u\n", c3);

  //0000 0110 = a
  //0001 1000 = a << 2 == 24
  unsigned char c4 = a << 2;
  printf("%u\n", c4);

  //0000 0110 = a
  //0000 0001 = a >> 2 == 1
  unsigned char c5 = a >> 2;
  printf("%u\n", c5);


  //0000 0001 << 0 == 0000 0001
  //0000 0001 << 1 == 0000 0010
  //0000 0001 << 2 == 0000 0100
  //0000 0001 << 3 == 0000 1000
  int n = 5;
  for (int i = 0; i < n; i++) {
    printf("%d ", 1 << i);
  }
  printf("\n");

  unsigned char n1 = 249;
  size_t nBits = sizeof(n1) * 8;
  for (int i = nBits - 1; i >=0; i--) {
    printf("%u", (n1 >> i) & 1);
  }
  printf("\n");
  /**
   * 1111 1001 >> 7 == 0000 0001
   *                   0000 0001
   *                   0000 0001 == 1
   * 
   * 1111 1001 >> 6 == 0000 0011
   *                   0000 0001
   *                   0000 0001 == 1
   * 
   * ...........
   * 1111 1001 >> 2 == 0011 1110 
   *                   0000 0001
   *                   0000 0000 == 0
   * 
   */

  return 0;
}