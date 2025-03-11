#include <stdio.h>
#include <stdlib.h>

char * readLine() {
  char currentSymbol = '\0';
  int size = 0;
  char * line = NULL;
  do {
    currentSymbol = getchar();
    size++;
    char * temp = realloc(line, sizeof(char) * size);
    if (temp == NULL) {
      printf("Error allocating memory\n");
      exit(1);
    }
    line = temp;
    line[size-1] = currentSymbol;
  } while(currentSymbol != '\n' && currentSymbol != EOF);

  if (currentSymbol == EOF) {
    printf("Error reading symbols from stdin\n");
    exit(1);
  }
  
  line[size-1] = '\0';
  return line;
}

int main(void) {

  int namesCount = 0;
  printf("Please enter names count:");
  scanf("%d", &namesCount);
  getchar();

  char **names = malloc(sizeof(char *) * namesCount);
  if (names == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = 0; i < namesCount; i++) {
    names[i] = readLine();
  }

  for (int i = 0; i < namesCount; i++) {
    printf("Name[%d] = %s\n", i+1, names[i]);
  }

  for (int i = 0; i < namesCount; i++) {
    free(names[i]);
    names[i] = NULL;
  }
  free(names);

  return 0;
}