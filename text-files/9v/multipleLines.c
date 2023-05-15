#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * textFile = fopen("records.txt", "r");
  if (textFile == NULL) {
    printf("Cannot open file \n");
    exit(0);
  }

  char line[100];
  while (fgets(line, 100, textFile) != NULL) {
    printf("Line: %s", line);
  }

  fclose(textFile);

  return 0;
}