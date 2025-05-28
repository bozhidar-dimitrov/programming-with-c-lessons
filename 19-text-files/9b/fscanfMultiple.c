#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //r - open for reading
  //w - open for writing
  //a - open for appending
  //r+ - open for reading and writing
  //w+ - open for writing and reading
  //a+ - open for reading and appending
  FILE * file = fopen("students.txt", "r");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  
  int number;
  char name[100];
  double averageGrade;

  while (fscanf(file, "%d %s %lf\n", &number, name, &averageGrade) != EOF) {
    printf("------------------------------\n");
    printf("Student number: %d\n", number);
    printf("Student name: %s\n", name);
    printf("Student average grade: %lf\n", averageGrade);
    printf("------------------------------\n");
  }

  fclose(file);

  return 0;
}