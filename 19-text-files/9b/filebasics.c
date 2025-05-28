#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for reading and appending
  FILE * file = fopen("test.txt", "a");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  //Operating with the file
  printf("File opened successfully\n");

  fclose(file);

  return 0;
}