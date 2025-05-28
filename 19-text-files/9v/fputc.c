#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("symbols.txt", "a");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  
  char symbol = 'A';
  fputc(symbol, file);

  //Alawys close the file when we don't need it
  fclose(file);

  return 0;
}