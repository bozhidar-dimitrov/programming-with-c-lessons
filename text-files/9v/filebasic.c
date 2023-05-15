#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //"r" - open for reading
  //"w" - open for writing
  //"a" - open for append
  //"r+" - open for reading + writing
  //"w+" - open for writing + reading
  //"a+" - open for append + reading
  FILE * textFile = fopen("test.txt", "w");
  if (textFile == NULL) {
    printf("Cannot open file \n");
    exit(0);
  }

  //Using the file
  //fprintf
  //fputs
  //fputc
  char currentChar = 'B';
  fprintf(textFile, "%s %d %lf\n", "Ivan", 1, 5.5);
  fputs("Nikolai\n", textFile);
  fputc(currentChar, textFile);

  fclose(textFile);

  return 0;
}