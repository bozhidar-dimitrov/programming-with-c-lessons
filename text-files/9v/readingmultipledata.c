#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * textFile = fopen("records.txt", "r");
  if (textFile == NULL) {
    printf("Cannot open file \n");
    exit(0);
  }

  char name[40];
  int number;
  double average;
  while (fscanf(textFile, "%s %d %lf\n", name, &number, &average) > 0) {
    printf("Name: %s, number: %d, averageGrade: %lf\n", name, number, average);
  }

  fclose(textFile);

  return 0;
}