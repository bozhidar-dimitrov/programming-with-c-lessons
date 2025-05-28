#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for appending and reading
  FILE * file = fopen("students.txt", "a");
  if (file == NULL) {
    printf("Error opening a file\n");
    exit(1);
  }

  int number = 1;
  char name[] = "Mihail";
  double averageGrade = 6.0;

  fprintf(file, "%d %s %lf\n", number, name, averageGrade);

  //Always close the file when done using it!
  fclose(file);

  return 0;
}