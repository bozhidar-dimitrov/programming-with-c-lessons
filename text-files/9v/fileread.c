#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //"r" - open for reading
  //"w" - open for writing
  //"a" - open for append
  //"r+" - open for reading + writing
  //"w+" - open for writing + reading
  //"a+" - open for append + reading
  FILE * textFile = fopen("test.txt", "r");
  if (textFile == NULL) {
    printf("Cannot open file \n");
    exit(0);
  }

  //Using the file - reading
  //fscanf - 
  //fgets
  //fgetc
  char name[40];
  int number;
  double average;
  fscanf(textFile, "%s %d %lf\n", name, &number, &average);
  printf("Name: %s, number: %d, averageGrade: %lf\n", name, number, average);

  char line[100];
  fgets(line, 100, textFile);
  printf("Line: %s", line);

  char symbol = fgetc(textFile);
  printf("Symbol: %c\n", symbol);

  fclose(textFile);

  return 0;
}