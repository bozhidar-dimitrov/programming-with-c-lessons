#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for reading and appending
  FILE * file = fopen("symbols.txt", "r");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
 
  char c;
  while ((c = fgetc(file)) != EOF){
    printf("%c", c);
  }

  fclose(file);

  return 0;
}