#include <stdio.h>
#include <stdlib.h>

char * readLine() {
  char c = '\0';
  char * line = NULL;
  int size = 0;
  do {
    c = getchar();
    size++;
    line = (char *)realloc(line, size * sizeof(char));
    if (line == NULL) {
      printf("Error allocating memory\n");
      exit(1);
    }
    line[size-1] = c;
  } while (c != '\n');
  line[size-1] = '\0';
  return line;
}

int main(void) {

  int studentscount = 0;
  printf("Please enter the number of students \n");
  scanf("%d", &studentscount);
  getchar();

  char ** names = (char **)malloc(studentscount * sizeof(char *));
  if (names == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = 0; i < studentscount; i++) {
    names[i] = readLine();
  }

  for (int i = 0; i < studentscount; i++) {
    printf("Student[%d]: %s\n", i+1, names[i]);
  }

  for (int i = 0; i < studentscount; i++) {
    free(names[i]);
  }
  free(names);

  return 0;
}