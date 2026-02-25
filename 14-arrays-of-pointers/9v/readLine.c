#include <stdio.h>
#include <stdlib.h>

char * readLine() {
  char currentChar = '\0';
  char * line = NULL;
  size_t size = 0;
  do {
    currentChar = getchar();
    size++;
    char * currentLine = (char *)realloc(line, size * sizeof(char));
    if (currentLine == NULL) {
      printf("Error allocating memory \n");
      if (line != NULL) {
        free(line);
      }
      exit(1);
    }
    line = currentLine;
    line[size-1] = currentChar;
  } while(currentChar != '\n');

  line[size-1] = '\0';
  return line;
}

int main(void) {

  int studentsCount = 0;
  printf("Please enter the number of students:");
  scanf("%d", &studentsCount);
  getchar();

  char ** studentNames = (char **)malloc(studentsCount * sizeof(char *));
  if (studentNames == NULL){
    printf("Error allocating memory \n");
    exit(1);
  }

  for (int i = 0; i < studentsCount; i++) {
    printf("Please enter the name of student %d:", i+1);
    studentNames[i] = readLine();
  }

  for (int i = 0; i < studentsCount; i++) {
    printf("student %d name: %s\n", i+1, studentNames[i]);
  }

  for (int i = 0; i < studentsCount; i++) {
    free(studentNames[i]);
  }
  free(studentNames);

  return 0;
}