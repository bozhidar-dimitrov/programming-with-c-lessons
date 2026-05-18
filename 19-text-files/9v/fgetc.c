#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //File modes for text files:
  /**
   * r - open file for reading
   * w - open file for writing
   * a - open file for appending
   * r+ - open file for reading and writing
   * w+ - open file for writing and reading
   * a+ - open file for appending and reading
   */
  FILE * file = fopen("symbols.txt", "r");
  if (file == NULL) {
    printf("Error opening the file\n");
    exit(1);
  }

  //Working with the file:
  printf("File opened correctly \n");

  char symbol = fgetc(file);
  printf("%c\n", symbol);

  fclose(file);

  return 0;
}