#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for appending and reading
  FILE * file = fopen("diary.txt", "a");
  if (file == NULL) {
    printf("Error opening a file\n");
    exit(1);
  }

  char line[] = "Today it was rainy and I was late for the bus\n";
  fputs(line, file);

  //Always close the file when done using it!
  fclose(file);

  return 0;
}