#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //File modes for text files:
  /**
   * r - open file for reading
   * w - open file for writing
   * a - open file for appending
   * r+ - open file for reading and writing
   * w+ - open file for writing and reading
   * a+ - open file for appending and reading
   */
  FILE * file = fopen("students.txt", "a");
  if (file == NULL) {
    printf("Error opening the file\n");
    exit(1);
  }

  //Working with the file:
  printf("File opened correctly \n");

  int number = 1;
  char name[] = "Adriana";
  float averageGrade = 5.5;

  fprintf(file, "%d %s %f\n", number, name, averageGrade);

  fclose(file);

  return 0;
}