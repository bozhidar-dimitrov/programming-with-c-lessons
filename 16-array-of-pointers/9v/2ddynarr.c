#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int rows = 0;
  int columns = 0;

  printf("Please enter rows and columns:");
  scanf("%d %d", &rows, &columns);

  int **pp = (int **)calloc(rows, sizeof(int *));
  if (pp == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  for (int i = 0; i < rows; i++) {
    pp[i] = (int *)calloc(columns, sizeof(int));
    if (pp[i] == NULL) {
      printf("Error allocating memory\n");
      return 1;
    }
  }

  int number = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      pp[i][j] = number;
      number++;
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < rows; i++) {
    free(pp[i]);
  }
  free(pp);


  return 0;
}