#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for appending and reading
  FILE * file = fopen("symbols.txt", "r");
  if (file == NULL) {
    printf("Error opening a file\n");
    exit(1);
  }

  //Operating with the file
  int c;
  while((c = fgetc(file)) != EOF) {
    printf("%c", c);
  }

  //Always close the file when done using it!
  fclose(file);

  return 0;
}