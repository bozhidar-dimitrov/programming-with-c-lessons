#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //"r" - open for read
  //"w" - open for write
  //"a" - open for append
  //"r+" - open for read and write
  //"w+" - open for write and read
  //"a+" - open for append read
  FILE * textFile = fopen("test.txt", "w");
  if (textFile == NULL) {
    printf("Cannot open file\n");
    exit(0);
  }

  //File manipulation
  //fprintf
  //fputs
  //fputc
  char currentSymbol = 'B';
  fprintf(textFile, "%s %d %lf\n", "Ivan", 1, 5.5);
  fputs("Nikolai\n", textFile);
  fputc('A', textFile);

  fclose(textFile);

  return 0;
}