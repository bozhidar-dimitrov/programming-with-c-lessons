#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("output.txt", "w");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  char name[100];
  scanf("%s", name);

  fputs(name, file);

  fclose(file);

  return 0;
}