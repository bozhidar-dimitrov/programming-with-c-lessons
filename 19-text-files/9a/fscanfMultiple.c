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
  FILE * file = fopen("students.txt", "r");
  if (file == NULL) {
    printf("Error opening the file \n");
    exit(1);
  }

  //Working with the file:
  printf("File opened correctly!\n");

  int numberInClass;
  char name[200];
  float averageGrade;

  while (fscanf(file, "%d %s %f", &numberInClass, name, &averageGrade) == 3) {
    printf("Number: %d\n", numberInClass);  
    printf("Name: %s\n", name);  
    printf("Average grade: %f\n", averageGrade);
  }

  fclose(file);

  return 0;
}