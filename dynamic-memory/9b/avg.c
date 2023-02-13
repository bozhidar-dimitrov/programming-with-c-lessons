#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int markscount = 0;
  printf("Please number of marks:");
  scanf("%d", &markscount);

  //float * marks = (float *) malloc(markscount * sizeof(float));
  float * marks = (float *) calloc(markscount, sizeof(float));
  //marks = NULL; //memory leak
  if (marks == NULL) {
    printf("Error allocating memory \n");
    return 1;
  }

  for (int i = 0; i < markscount; i++)
  {
    printf("Mark %d:", i + 1);
    scanf("%f", &marks[i]);
  }

  float sum = 0;
  for (int i = 0; i < markscount; i++)
  {
    sum += marks[i];
  }
  
  if (marks != NULL) {
    free(marks);
  }
  
  printf("Average:%f", sum / markscount);

  return 0;
}