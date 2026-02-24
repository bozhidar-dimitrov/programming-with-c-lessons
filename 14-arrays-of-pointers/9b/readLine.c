#include <stdio.h>
#include <stdlib.h>

char * readLine() {
  char currentChar = '\0';
  char * line = NULL;
  size_t lineSize = 0;
  do {
    currentChar = getchar();
    lineSize++;
    char * currentLine = (char *)realloc(line, sizeof(char) * lineSize);
    if (currentLine == NULL) {
      printf("Error allocating memory");
      exit(1);
    }
    line = currentLine;

    line[lineSize-1] = currentChar;
  } while (currentChar != '\n');

  line[lineSize-1] = '\0';
  return line;
}

int main(void) {

  char * name = readLine();
  printf("Name: %s\n", name);

  return 0;
}