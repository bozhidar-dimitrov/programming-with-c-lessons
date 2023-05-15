#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //"r" - open for read
  //"w" - open for write
  //"a" - open for append
  //"r+" - open for read and write
  //"w+" - open for write and read
  //"a+" - open for append read
  FILE * textFile = fopen("test.txt", "a");
  if (textFile == NULL) {
    printf("Cannot open file\n");
    exit(0);
  }

  //File manipulation

  fclose(textFile);

  return 0;
}