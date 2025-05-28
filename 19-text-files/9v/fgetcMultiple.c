#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
  FILE * file = fopen("symbols.txt", "r");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  //Operating with the file
  char c;
  while ((c = fgetc(file)) != EOF) {
    printf("%c\n", c);
  }

  //Alawys close the file when we don't need it
  fclose(file);

  return 0;
}