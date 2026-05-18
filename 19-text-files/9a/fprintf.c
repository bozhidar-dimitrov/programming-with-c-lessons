#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //File modes for text files
  /*
    r - open for reading
    w - open for writing
    a - open for appending
    r+ - open for reading and writing 
    w+ - open for writing and reading
    a+ - open for appending and reading
  */
  FILE * file = fopen("students.txt", "a");
  if (file == NULL) {
    printf("Error opening the file \n");
    exit(1);
  }

  //Working with the file:
  printf("File opened correctly!\n");

  int numberInClass = 1;
  char name[] = "Stefan";
  float averageGrade = 5.5;

  fprintf(file, "%d %s %f\n", numberInClass, name, averageGrade);

  fclose(file);

  return 0;
}