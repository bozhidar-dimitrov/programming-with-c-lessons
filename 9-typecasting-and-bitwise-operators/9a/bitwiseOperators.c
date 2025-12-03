#include <stdio.h>
#include <limits.h>

int main(void) {

  //Arithmetic
  //Logical
  //Comparison operators
  //Assignement
  //Bitwise operators:

  unsigned char a = 6; //0000 0110
  unsigned char b = 7; //0000 0111

  //& - bitwise and
  //| - bitwise or
  //~ - bitwise not
  //^ - bitwise XOR
  // Logical table of XOR: (сума по модул две)
  //    A    B    A ^ B
  //    0    0      0
  //    0    1      1
  //    1    0      1
  //    1    1      0
  // >> - bitwise right shift
  // << - bitwise left shift

  //0000 0110 = a
  //0000 0111 = b
  //0000 0110 = a & b
  unsigned char c = a & b;
  printf("%u\n", c);

  //0000 0110 = a
  //0000 0111 = b
  //0000 0111 = a | b
  unsigned char c2 = a | b;
  printf("%u\n", c2);

  //0000 0110 = a
  //1111 1001 = ~a
  unsigned char c3 = ~a;
  printf("%u\n", c3);

  //0000 0110 = a
  //0000 0111 = b
  //0000 0001 = a ^ b
  unsigned char c4 = a ^ b;
  printf("%u\n", c4);

  //0000 0110 = a
  //0001 1000 = a << 2
  unsigned char c5 = a << 2;
  printf("%u\n", c5);

  unsigned char d = 255; //1111 1111

  //1111 1111 = d
  //1111 1000 = d << 3
  unsigned char c6 = d << 3;
  printf("%u\n", c6);

  //0000 0110 = a
  //0000 0001 = a >> 2
  unsigned char c7 = a >> 2;
  printf("%u\n", c7);

  //Program that returns the first n powers of 2
  int n = 6;
  for (int i = 0; i < n; i++) {
    printf("2 to the power of %d:%d\n", i, 1 << i);
  }

  //Program that transform decimal to binary:
  unsigned char n1 = 249;
  for (int i = sizeof(n1)*8  - 1; i >= 0; i--) {
    printf("%u", (n1 >> i) & 1);
  }
  printf("\n");

  return 0;
}