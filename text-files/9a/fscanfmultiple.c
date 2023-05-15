#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //"r" - open for read
  //"w" - open for write
  //"a" - open for append
  //"r+" - open for read and write
  //"w+" - open for write and read
  //"a+" - open for append read
  FILE * textFile = fopen("records.txt", "r");
  if (textFile == NULL) {
    printf("Cannot open file\n");
    exit(0);
  }

  char name[40];
  int number;
  double averageGrade;
  while (fscanf(textFile, "%s %d %lf\n", name, &number, &averageGrade) > 0) {
    printf(
      "Name: %s, number:%d, averageGrade: %lf\n", 
      name, 
      number, 
      averageGrade
    );
  }

  fclose(textFile);

  return 0;
}