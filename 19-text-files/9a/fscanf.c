#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for appending and reading
  FILE * file = fopen("students.txt", "r");
  if (file == NULL) {
    printf("Error opening a file\n");
    exit(1);
  }

  int number;
  char name[100];
  double averageGrade;

  fscanf(file, "%d %s %lf\n", &number, name, &averageGrade);

  printf("Student number: %d\n", number);
  printf("Student name: %s\n", name);
  printf("Student average grade: %lf\n", averageGrade);

  //Always close the file when done using it!
  fclose(file);

  return 0;
}