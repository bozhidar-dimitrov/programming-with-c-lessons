#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int rows = 0;
  int columns = 0;
  printf("Please enter rows count and columns count:");
  scanf("%d %d", &rows, &columns);

  int **p = (int **)malloc(rows * sizeof(int *));
  if (p == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = 0; i < rows; i++) {
    p[i] = (int *) malloc(columns * sizeof(int));
    if (p[i] == NULL) {
      printf("Error allocating memory\n");
      exit(1);
    }
  }

  int number = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      p[i][j] = number++;
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%3d", p[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < rows; i++) {
    free(p[i]);
    p[i] = NULL;
  }
  free(p);
  p = NULL;

  return 0;
}