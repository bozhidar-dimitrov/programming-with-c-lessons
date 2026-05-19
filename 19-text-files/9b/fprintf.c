#include <stdio.h>
#include <stdlib.h>

int main(void) {

  /**
    * File modes for working with text files:
    * "r" - open file for reading
    * "w" - open file for writing
    * "a" - open file for appending
    * r+ - open for reading and writing
    * w+ - open for writing and reading
    * a+ - open for appending and reading
    */
  FILE * file = fopen("students.txt", "a");
  if (file == NULL) {
    printf("Error opening the file \n");
    exit(1);
  }

  //Working with the file
  printf("File opened correctly!\n");

  int number = 9;
  char name[] = "Violeta";
  float averageGrade = 5.5;

  fprintf(file, "%d %s %f\n", number, name, averageGrade);

  fclose(file);

  return 0;
}