#include <stdio.h>
#include <stdlib.h>

void assertMemoryAllocation(void * ptr, void * resourceToFree) {
  if (ptr == NULL) {
    if (resourceToFree != NULL) {
      free(resourceToFree);
    }
    printf("Error allocating memory \n");
    exit(1);
  }
}

char * readLine() {
  char currentChar = '\0';
  char * line = NULL;
  size_t size = 0;
  do {
    currentChar = getchar();
    size++;
    char * currentLine = realloc(line, size * sizeof(char));
    assertMemoryAllocation(currentLine, line);
    line = currentLine;
    line[size - 1] = currentChar;
  } while (currentChar != '\n');
  line[size-1] = '\0';
  return line;
}

int main(void) {


  int studentsCount;
  printf("Please enter the number of students: ");
  scanf("%d", &studentsCount);
  getchar();

  char ** studentNames = malloc(studentsCount * sizeof(char *));
  assertMemoryAllocation(studentNames, NULL);

  for (int i = 0; i < studentsCount; i++) {
    printf("Please enter the name of student %d:", i + 1);
    studentNames[i] = readLine();
  }

  for (int i = 0; i < studentsCount; i++) {
    printf("The name of student %d is:%s\n", i+1, studentNames[i]);
  }

  return 0;
}