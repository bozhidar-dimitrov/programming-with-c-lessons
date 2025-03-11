#include <stdio.h>
#include <stdlib.h>

char * readLine() {
  char currentChar = '\0';
  char * line = NULL;
  int size = 0;
  do {
    currentChar = getchar();
    size++;
    
    char * curLine = realloc(line, size * sizeof(char));
    if (curLine == NULL) {
      printf("Error allocating memory \n");
      exit(1);
    }
    line = curLine;
    line[size-1] = currentChar;
  } while(currentChar != '\n');
  line[size-1] = '\0';
  return line;
}

int main(void) {

  int namesCount = 0;
  printf("Please enter the number of names:\n");
  scanf("%d", &namesCount);
  getchar();

  char **names = (char **)malloc(sizeof(char *) * namesCount);
  if (names == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = 0; i < namesCount; i++) {
    names[i] = readLine();
  }

  for (int i = 0; i < namesCount; i++) {
    printf("Name[%d] = %s\n", i, names[i]);
  }

  for (int i = 0; i < namesCount; i++) {
    free(names[i]);
  }
  free(names);

  return 0;
}