#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //r - open for reading
  //w - open for writing
  //a - open for apending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for appending and reading
  FILE * file = fopen("diary.txt", "r");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  
  char line[100];
  fgets(line, 100, file);

  printf("%s", line);

  //Alawys close the file when we don't need it
  fclose(file);

  return 0;
}