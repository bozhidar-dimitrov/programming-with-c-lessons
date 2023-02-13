#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int markscount = 0;
  printf("Enter number of marks:");
  scanf("%d", &markscount);

  //int * arr = (int *) malloc(markscount * sizeof(int));
  int * arr = (int *) calloc(markscount, sizeof(int));
  //arr = NULL; // memory leak
  if (arr == NULL) {
    printf("Error allocating memory \n");
    return 1;
  }

  float sum = 0;
  for (int i = 0; i < markscount; i++)
  {
    printf("Mark %d:", i+1);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  
  if (arr != NULL) {
    free(arr);
  }
  printf("Average: %f", sum / markscount);

  return 0;
}