#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char prompt[500];
  printf("Enter prompt:");
  scanf("%[^\n]s", prompt);

  FILE * file = fopen("prompt.txt", "w");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  fputs(prompt, file);

  fclose(file);

  return 0;
}