#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int rowsCount = 0;
  printf("Please enter the number of rows: ");
  scanf("%d", &rowsCount);

  int **elements = (int **)malloc(rowsCount * sizeof(int *));
  if (elements == NULL){
    printf("Error allocating memory \n");
    exit(1);
  }

  int columnsCount = 0;
  printf("Please enter the number of columns: ");
  scanf("%d", &columnsCount);

  for (int i = 0; i < rowsCount; i++) {
    elements[i] = malloc(columnsCount * sizeof(int));
    if (elements[i] == NULL){
      for (int j = 0; j < i; j++) {
        free(elements[j]);
      }
      free(elements);
      printf("Error allocating memory \n");
      exit(1);
    }
  }

  int number = 1;
  for (int i = 0; i < rowsCount; i++) {
    for (int j = 0; j < columnsCount; j++){
      elements[i][j] = number++;
    }
  }

  for (int i = 0; i < rowsCount; i++) {
    for (int j = 0; j < columnsCount; j++){
      printf("%d ", elements[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < rowsCount; i++) {
    free(elements[i]);
  }
  free(elements);

  return 0;
}