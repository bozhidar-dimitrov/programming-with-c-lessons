#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("diary.txt", "a");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  
  char line[] = "Today it was rainy and I was late for the bus\n";

  fputs(line, file);

  //Alawys close the file when we don't need it
  fclose(file);

  return 0;
}