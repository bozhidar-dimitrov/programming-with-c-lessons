#include <stdio.h>

int main(void) {

  int a1[] = {1, 2, 3, 4, 5};

  int a[5];
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;

  printf("%d", a[0]);

  int b[100];
  for (int i = 0; i < 100; i++) {
    b[i] = i + 1;
  }

  for (int i = 0; i < 100; i++) {
    printf("\nb[%d]=%d", i, b[i]);
  }

  int c[3][4];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      c[i][j] = i * 4 + j + 1;
    }
  }

  int c1[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  return 0;
}