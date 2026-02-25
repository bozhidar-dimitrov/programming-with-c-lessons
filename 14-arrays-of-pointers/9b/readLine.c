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
      if (line != NULL) {
        free(line);
      }
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

  int studentsCount = 0;
  printf("Please enter the number of students: \n");
  scanf("%d", &studentsCount);
  getchar();

  char ** studentNames = malloc(studentsCount * sizeof(char *));
  if (studentNames == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }

  for (int i = 0; i < studentsCount; i++) {
    printf("Please enter the name of student %d:", i+1);
    studentNames[i] = readLine();
  }

  for (int i = 0; i < studentsCount; i++) {
    printf("Student %d has name: %s\n", i+1, studentNames[i]);
  }

  for (int i = 0; i < studentsCount; i++) {
    free(studentNames[i]);
  }
  free(studentNames);

  return 0;
}