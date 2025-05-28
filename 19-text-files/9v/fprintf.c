#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("students.txt", "a");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  int studentNumber = 2;
  char name[] = "Nikolai";
  double averageGrade = 5.5;

  fprintf(file, "%d %s %lf\n", studentNumber, name, averageGrade);

  //Operating with the file
  printf("File is open!\n");

  //Alawys close the file when we don't need it
  fclose(file);

  return 0;
}