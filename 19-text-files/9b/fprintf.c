#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for reading and appending
  FILE * file = fopen("students.txt", "a");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  
  int number = 1;
  char name[] = "Irena";
  double averageGrade = 5.5;

  fprintf(file, "%d %s %lf\n", number, name, averageGrade);

  fclose(file);

  return 0;
}