#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //"r" - open for read
  //"w" - open for write
  //"a" - open for append
  //"r+" - open for read and write
  //"w+" - open for write and read
  //"a+" - open for append read
  FILE * textFile = fopen("test.txt", "r");
  if (textFile == NULL) {
    printf("Cannot open file\n");
    exit(0);
  }

  //File manipulation - reading
  //fscanf - 
  //fgets
  //fgetc
  char name[40];
  int number;
  double averageGrade;
  fscanf(textFile, "%s %d %lf\n", name, &number, &averageGrade);
  printf(
    "Name: %s, number:%d, averageGrade: %lf\n", 
    name, 
    number, 
    averageGrade
  );

  char line[100];
  fgets(line, 100, textFile);
  printf("Line: %s", line);

  char symbol = fgetc(textFile);
  printf("Symbol: %c\n", symbol);

  fclose(textFile);

  return 0;
}