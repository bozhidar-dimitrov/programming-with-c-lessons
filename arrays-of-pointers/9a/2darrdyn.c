#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int rows = 3;
  int columns = 4;
  //{{}, {}, {}} -> array of ptrs of size 3
  int ** p= (int **)calloc(rows, sizeof(int *));
  for (int i = 0; i < rows; i++) {
    p[i] = (int *)calloc(columns, sizeof(int));
  }

  int count = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      p[i][j] = ++count;
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < rows; i++) {
    free(p[i]);
  }
  free(p);

  return 0;
}