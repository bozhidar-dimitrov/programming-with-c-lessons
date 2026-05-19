#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //File modes for text files
  /*
    r - open for reading
    w - open for writing
    a - open for appending
    r+ - open for reading and writing 
    w+ - open for writing and reading
    a+ - open for appending and reading
  */
  FILE * file = fopen("diary.txt", "r");
  if (file == NULL) {
    printf("Error opening the file \n");
    exit(1);
  }

  //Working with the file:
  printf("File opened correctly!\n");

  char line[100];

  while(fgets(line, 100, file) != NULL) {
    printf("%s", line);
  }

  fclose(file);

  return 0;
}