#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int rowsCount = 0;
  int columnsCount = 0;
  printf("Please enter rows and columns count:");
  scanf("%d %d", &rowsCount, &columnsCount);

  int **ptr = (int **)malloc(rowsCount * sizeof(int *));
  if (ptr == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }

  for (int i = 0; i < rowsCount; i++) {
    ptr[i] = malloc(columnsCount * sizeof(int));
    if (ptr[i] == NULL) {
      printf("Error allocating memory \n");
      exit(1);
    }
  }

  int number = 1;
  for (int i = 0; i < rowsCount; i++) {
    for (int j = 0; j < columnsCount; j++) {
      ptr[i][j] = number++;
    }
  }

  for (int i = 0; i < rowsCount; i++) {
    for (int j = 0; j < columnsCount; j++) {
      printf("%3d", ptr[i][j]);
    }
    printf("\n");
  }

  return 0;
}